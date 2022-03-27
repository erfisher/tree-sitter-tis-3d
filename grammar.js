nulArgInstr = (x,$) => field('instruction',alias(x,$.instruction))
jumpInstr   = (x,$) => seq(field('instruction',alias(x,$.instruction)), $._whitespace, field('argument',$.label))
oneArgInstr = (x,$) => seq(field('instruction',alias(x,$.instruction)), $._whitespace, field('argument',$._arg))
twoArgInstr = (x,$) => seq(field('instruction',alias(x,$.instruction)), $._whitespace, field('argument',$._arg), $._whitespace, field('argument',$._arg))


module.exports = grammar({
  name: 'TIS3D',

  rules: {
    source_file: $ => seq(repeat(seq(optional($.external_text), $.program)),optional($.external_text)),
    program: $ => seq($.program_start,
                      repeat(seq(optional($.line_label),
                                 choice($._generic_comment,$.statement),
                                 $._endofline) //Every command is on its own line.
                            ),
                     $.program_end),
    program_start: $ => seq('#!BEGIN PROGRAM',$._endofline),
    program_end: $ => seq('#!END PROGRAM',$._endofline),
    statement: $ => seq(choice($.command),
                    optional(seq(optional($._whitespace),$.line_comment))
                  ),
    line_label: $ => seq($.label,optional($._whitespace),':',optional($._whitespace)),
    label: $ => /[^#\s:]+/,
    _port: $ => choice($.default_port,$.unknown_port),
    default_port: $ => choice('UP','DOWN','LEFT','RIGHT','ANY','NUL','LAST'),
    unknown_port: $ => /[a-zA-Z]\w*/,
    _arg: $ => choice($.arg_literal,$._port),
    arg_literal: $ => choice(/[0-9]+/,/0[xX][0-9A-F]+/),
    command: $ => choice(nulArgInstr('NOP',$),

                         seq(field('instruction','MOV'), $._whitespace, field('argument',$._arg), $._whitespace, field('argument',$._port)),
                         nulArgInstr('SAV',$),
                         nulArgInstr('SWP',$),

                         oneArgInstr('ADD',$),
                         oneArgInstr('SUB',$),
                         oneArgInstr('MUL',$),
                         oneArgInstr('DIV',$),
                         nulArgInstr('NEG',$),

                         oneArgInstr('AND',$),
                         oneArgInstr('OR', $),
                         oneArgInstr('XOR',$),
                         oneArgInstr('SHL',$),
                         oneArgInstr('SHR',$),
                         nulArgInstr('NOT',$),

                         nulArgInstr('RRLAST',$),
                         nulArgInstr('RLLAST',$),

                         jumpInstr('JMP',$),
                         jumpInstr('JEZ',$),
                         jumpInstr('JNZ',$),
                         jumpInstr('JGZ',$),
                         jumpInstr('JLZ',$),
                         oneArgInstr('JRO',$)
                         ),
    _generic_comment: $ => choice($.macro,$.line_comment),
    macro: $ => choice(
                       seq('#DEFINE',$._whitespace,field('label',$._port),$._whitespace, field('value',$._arg)),
                       seq('#UNDEFINE',field('label',$._port)),
                       '#BWTM'
                     ),
    line_comment: $ =>token(prec(-10,/#[^\r\n]*/)),
    _whitespace:  $ =>/[ \t]+/,
    _endofline:   $ =>/[ \t]*?[\r\n]+/,
    external_text: $ => /([^#].*\n|#[^!].*\n)+/

  },
  extras: $ => []
});

/* Generated by re2c 2.0.3 */
#line 1 "sbml_tokenizer.re"
#include "sbml_tokenizer.h"
#include "sbml_parser.tab.hh"

namespace SymEngine
{

int SbmlTokenizer::lex(ParserSType &yylval)
{
    for (;;) {
        tok = cur;

#line 15 "sbml_tokenizer.cpp"
        {
            unsigned char yych;
            static const unsigned char yybm[] = {
                0,   0,   0,   0,   0,   0,   0,   0,   0,   32,  32,  32,  0,
                32,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                0,   0,   0,   0,   0,   0,   32,  0,   0,   0,   0,   0,   0,
                0,   0,   0,   0,   0,   0,   0,   0,   0,   192, 192, 192, 192,
                192, 192, 192, 192, 192, 192, 0,   0,   0,   0,   0,   0,   0,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                0,   0,   0,   0,   128, 0,   128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 0,   0,   0,   0,   0,   128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128,
            };
            yych = *cur;
            if (yybm[0 + yych] & 32) {
                goto yy6;
            }
            if (yych <= '<') {
                if (yych <= '&') {
                    if (yych <= '!') {
                        if (yych <= 0x00)
                            goto yy2;
                        if (yych <= 0x1F)
                            goto yy4;
                        goto yy9;
                    } else {
                        if (yych <= '$')
                            goto yy4;
                        if (yych <= '%')
                            goto yy11;
                        goto yy12;
                    }
                } else {
                    if (yych <= '.') {
                        if (yych <= '\'')
                            goto yy4;
                        if (yych <= '-')
                            goto yy11;
                        goto yy13;
                    } else {
                        if (yych <= '/')
                            goto yy11;
                        if (yych <= '9')
                            goto yy14;
                        if (yych <= ';')
                            goto yy4;
                        goto yy17;
                    }
                }
            } else {
                if (yych <= '^') {
                    if (yych <= '?') {
                        if (yych <= '=')
                            goto yy18;
                        if (yych <= '>')
                            goto yy19;
                        goto yy4;
                    } else {
                        if (yych <= '@')
                            goto yy11;
                        if (yych <= 'Z')
                            goto yy20;
                        if (yych <= ']')
                            goto yy4;
                        goto yy11;
                    }
                } else {
                    if (yych <= 'z') {
                        if (yych == '`')
                            goto yy4;
                        goto yy20;
                    } else {
                        if (yych == '|')
                            goto yy23;
                        if (yych <= 0x7F)
                            goto yy4;
                        goto yy20;
                    }
                }
            }
        yy2:
            ++cur;
#line 33 "sbml_tokenizer.re"
            {
                return sbmltokentype::END_OF_FILE;
            }
#line 106 "sbml_tokenizer.cpp"
        yy4:
            ++cur;
        yy5 :
#line 32 "sbml_tokenizer.re"
        {
            throw SymEngine::ParseError("Unknown token: '" + token() + "'");
        }
#line 112 "sbml_tokenizer.cpp"
        yy6:
            yych = *++cur;
            if (yybm[0 + yych] & 32) {
                goto yy6;
            }
#line 34 "sbml_tokenizer.re"
            {
                continue;
            }
#line 120 "sbml_tokenizer.cpp"
        yy9:
            yych = *++cur;
            if (yych == '=')
                goto yy24;
        yy10 :
#line 37 "sbml_tokenizer.re"
        {
            return tok[0];
        }
#line 127 "sbml_tokenizer.cpp"
        yy11:
            ++cur;
            goto yy10;
        yy12:
            yych = *++cur;
            if (yych == '&')
                goto yy26;
            goto yy10;
        yy13:
            yych = *++cur;
            if (yych <= '/')
                goto yy5;
            if (yych <= '9')
                goto yy28;
            goto yy5;
        yy14:
            yych = *(mar = ++cur);
            if (yybm[0 + yych] & 64) {
                goto yy14;
            }
            if (yych <= 'D') {
                if (yych == '.')
                    goto yy30;
            } else {
                if (yych <= 'E')
                    goto yy31;
                if (yych == 'e')
                    goto yy31;
            }
        yy16 :
#line 45 "sbml_tokenizer.re"
        {
            yylval.string = token();
            return sbmltokentype::NUMERIC;
        }
#line 154 "sbml_tokenizer.cpp"
        yy17:
            yych = *++cur;
            if (yych == '=')
                goto yy33;
            goto yy10;
        yy18:
            yych = *++cur;
            if (yych == '=')
                goto yy35;
            goto yy5;
        yy19:
            yych = *++cur;
            if (yych == '=')
                goto yy37;
            goto yy10;
        yy20:
            yych = *++cur;
            if (yybm[0 + yych] & 128) {
                goto yy20;
            }
#line 44 "sbml_tokenizer.re"
            {
                yylval.string = token();
                return sbmltokentype::IDENTIFIER;
            }
#line 174 "sbml_tokenizer.cpp"
        yy23:
            yych = *++cur;
            if (yych == '|')
                goto yy39;
            goto yy5;
        yy24:
            ++cur;
#line 40 "sbml_tokenizer.re"
            {
                return sbmltokentype::NE;
            }
#line 183 "sbml_tokenizer.cpp"
        yy26:
            ++cur;
#line 42 "sbml_tokenizer.re"
            {
                return sbmltokentype::AND;
            }
#line 188 "sbml_tokenizer.cpp"
        yy28:
            yych = *(mar = ++cur);
            if (yych <= 'D') {
                if (yych <= '/')
                    goto yy16;
                if (yych <= '9')
                    goto yy28;
                goto yy16;
            } else {
                if (yych <= 'E')
                    goto yy31;
                if (yych == 'e')
                    goto yy31;
                goto yy16;
            }
        yy30:
            yych = *++cur;
            if (yych <= '/')
                goto yy16;
            if (yych <= '9')
                goto yy28;
            goto yy16;
        yy31:
            yych = *++cur;
            if (yych <= ',') {
                if (yych == '+')
                    goto yy41;
            } else {
                if (yych <= '-')
                    goto yy41;
                if (yych <= '/')
                    goto yy32;
                if (yych <= '9')
                    goto yy42;
            }
        yy32:
            cur = mar;
            goto yy16;
        yy33:
            ++cur;
#line 38 "sbml_tokenizer.re"
            {
                return sbmltokentype::LE;
            }
#line 221 "sbml_tokenizer.cpp"
        yy35:
            ++cur;
#line 41 "sbml_tokenizer.re"
            {
                return sbmltokentype::EQ;
            }
#line 226 "sbml_tokenizer.cpp"
        yy37:
            ++cur;
#line 39 "sbml_tokenizer.re"
            {
                return sbmltokentype::GE;
            }
#line 231 "sbml_tokenizer.cpp"
        yy39:
            ++cur;
#line 43 "sbml_tokenizer.re"
            {
                return sbmltokentype::OR;
            }
#line 236 "sbml_tokenizer.cpp"
        yy41:
            yych = *++cur;
            if (yych <= '/')
                goto yy32;
            if (yych >= ':')
                goto yy32;
        yy42:
            yych = *++cur;
            if (yych <= '/')
                goto yy16;
            if (yych <= '9')
                goto yy42;
            goto yy16;
        }
#line 46 "sbml_tokenizer.re"
    }
}

} // namespace SymEngine

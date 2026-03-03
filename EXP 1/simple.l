%{
#include <stdio.h>
%}

%%
(int|float|char|double|if|else|while|for|return)   { printf("KEYWORD\n"); }
[0-9]+                                             { printf("NUMBER\n"); }
[a-zA-Z_][a-zA-Z0-9_]*                             { printf("IDENTIFIER\n"); }
[ \t\n]+                                          { printf("WHITESPACE\n"); }
.                                                  { printf("UNKNOWN\n"); }
%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    return 0;
}
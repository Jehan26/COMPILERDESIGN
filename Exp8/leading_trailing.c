#include <stdio.h>

int main() {
    char nonterminal;
    char production[20];

    printf("Enter production (Example E=E+T): ");
    scanf("%s", production);

    nonterminal = production[0];

    printf("\nLEADING(%c) = { %c }\n", nonterminal, production[2]);
    printf("TRAILING(%c) = { %c }\n", nonterminal, production[4]);

    return 0;
}

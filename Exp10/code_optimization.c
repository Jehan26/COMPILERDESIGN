#include <stdio.h>
#include <string.h>

int main() {
    char lhs1, lhs2, op1, op2, opr;

    printf("Enter first statement (e.g. a=b+c): ");
    scanf(" %c=%c%c%c", &lhs1, &op1, &opr, &op2);

    printf("Enter second statement (e.g. d=b+c): ");
    scanf(" %c=%c%c%c", &lhs2, &op1, &opr, &op2);

    printf("\nOptimized Code:\n");
    printf("%c = %c %c %c\n", lhs1, op1, opr, op2);
    printf("%c = %c\n", lhs2, lhs1);

    return 0;
}
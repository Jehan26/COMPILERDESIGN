#include <stdio.h>
#include <string.h>

int main() {
    char exp[20];
    char op1, op2, op;
    
    printf("Enter expression (like a=b+c): ");
    scanf("%s", exp);

    op1 = exp[2];
    op = exp[3];
    op2 = exp[4];

    printf("\nThree Address Code:\n");
    printf("t1 = %c %c %c\n", op1, op, op2);
    printf("%c = t1\n", exp[0]);

    return 0;
}
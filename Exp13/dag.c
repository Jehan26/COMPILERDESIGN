#include <stdio.h>
#include <string.h>

struct node {
    char op[5];
    char left[5];
    char right[5];
    char result[5];
};

int main() {
    struct node n[10];
    int count = 0, i, found;

    char result[5], left[5], op[5], right[5];

    printf("Enter expressions in the form:\n");
    printf("result = left op right\n");
    printf("Type 'end' to stop.\n\n");

    while (1) {
        printf("Enter result: ");
        scanf("%s", result);

        if (strcmp(result, "end") == 0)
            break;

        printf("Enter left operand: ");
        scanf("%s", left);

        printf("Enter operator: ");
        scanf("%s", op);

        printf("Enter right operand: ");
        scanf("%s", right);

        found = 0;

        for (i = 0; i < count; i++) {
            if (strcmp(n[i].left, left) == 0 &&
                strcmp(n[i].right, right) == 0 &&
                strcmp(n[i].op, op) == 0) {

                printf("Common subexpression found: %s = %s %s %s\n",
                       result, left, op, right);
                printf("Use existing node: %s\n\n", n[i].result);
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(n[count].result, result);
            strcpy(n[count].left, left);
            strcpy(n[count].op, op);
            strcpy(n[count].right, right);
            count++;
        }
    }

    printf("\nDAG Nodes:\n");
    printf("Result\tLeft\tOp\tRight\n");
    for (i = 0; i < count; i++) {
        printf("%s\t%s\t%s\t%s\n",
               n[i].result, n[i].left, n[i].op, n[i].right);
    }

    return 0;
}
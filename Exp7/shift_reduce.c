#include <stdio.h>
#include <string.h>

int main() {
    char input[20], stack[20];
    int i = 0, top = 0;

    printf("Enter input string: ");
    scanf("%s", input);

    printf("\nStack\tInput\tAction\n");

    while(input[i] != '\0') {
        stack[top++] = input[i];
        stack[top] = '\0';

        printf("%s\t%s\tShift\n", stack, &input[i+1]);

        if(top >= 2 && stack[top-2] == 'i' && stack[top-1] == 'd') {
            stack[top-2] = 'E';
            top--;
            stack[top] = '\0';

            printf("%s\t%s\tReduce E->id\n", stack, &input[i+1]);
        }

        i++;
    }

    if(strcmp(stack, "E") == 0)
        printf("\nString Accepted\n");
    else
        printf("\nString Rejected\n");

    return 0;
}
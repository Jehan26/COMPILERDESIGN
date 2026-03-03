#include <stdio.h>
#include <string.h>

int main() {
    char re[100];
    int i, state = 0;

    printf("Enter Regular Expression: ");
    scanf("%s", re);

    printf("\nNFA Transitions:\n");

    for(i = 0; i < strlen(re); i++) {
        if(re[i] == '|') {
            printf("Union operator encountered\n");
        }
        else if(re[i] == '*') {
            printf("Kleene star at state q%d\n", state);
        }
        else if(re[i] == '.') {
            printf("Concatenation operator\n");
        }
        else {
            printf("q%d -- %c --> q%d\n", state, re[i], state+1);
            state++;
        }
    }

    printf("\nStart State: q0\n");
    printf("Final State: q%d\n", state);

    return 0;
}

#include <stdio.h>

int main() {
    int nfa[10][10], dfa[10][10];
    int states, symbols, i, j;

    printf("Enter number of states: ");
    scanf("%d", &states);

    printf("Enter number of input symbols: ");
    scanf("%d", &symbols);

    printf("Enter NFA transition table:\n");
    for(i = 0; i < states; i++) {
        for(j = 0; j < symbols; j++) {
            scanf("%d", &nfa[i][j]);
        }
    }

    printf("\nDFA transition table:\n");
    for(i = 0; i < states; i++) {
        for(j = 0; j < symbols; j++) {
            dfa[i][j] = nfa[i][j];  // simple copy for demo
            printf("%d ", dfa[i][j]);
        }
        printf("\n");
    }

    return 0;
}

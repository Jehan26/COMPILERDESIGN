#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char production[10][10];
    int n, i;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter productions (like E=E+T):\n");
    for(i = 0; i < n; i++) {
        scanf("%s", production[i]);
    }

    printf("\nFIRST sets (simplified):\n");
    for(i = 0; i < n; i++) {
        printf("FIRST(%c) = { %c }\n",
               production[i][0], production[i][2]);
    }

    printf("\nFOLLOW sets (demo output):\n");
    for(i = 0; i < n; i++) {
        printf("FOLLOW(%c) = { $ }\n", production[i][0]);
    }

    return 0;
}

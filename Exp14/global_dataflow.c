#include <stdio.h>

int main() {
    int n, i;
    int def[10], use[10], in[10], out[10];

    printf("Enter number of basic blocks: ");
    scanf("%d", &n);

    printf("Enter DEF values for each block:\n");
    for(i = 0; i < n; i++) {
        printf("DEF[%d]: ", i);
        scanf("%d", &def[i]);
    }

    printf("Enter USE values for each block:\n");
    for(i = 0; i < n; i++) {
        printf("USE[%d]: ", i);
        scanf("%d", &use[i]);
    }

    out[n-1] = 0;

    for(i = n-1; i >= 0; i--) {
        in[i] = use[i] || (out[i] && !def[i]);
        if(i > 0)
            out[i-1] = in[i];
    }

    printf("\nBlock\tDEF\tUSE\tIN\tOUT\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n", i, def[i], use[i], in[i], out[i]);
    }

    return 0;
}
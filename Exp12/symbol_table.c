#include <stdio.h>
#include <string.h>

struct symbol {
    char name[20];
    char type[20];
    int size;
};

int main() {
    struct symbol s[10];
    int n, i;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter variable name: ");
        scanf("%s", s[i].name);

        printf("Enter data type: ");
        scanf("%s", s[i].type);

        if(strcmp(s[i].type, "int") == 0)
            s[i].size = 4;
        else if(strcmp(s[i].type, "float") == 0)
            s[i].size = 4;
        else if(strcmp(s[i].type, "char") == 0)
            s[i].size = 1;
        else if(strcmp(s[i].type, "double") == 0)
            s[i].size = 8;
        else
            s[i].size = 0;
    }

    printf("\nSymbol Table:\n");
    printf("Name\tType\tSize\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%s\t%d\n", s[i].name, s[i].type, s[i].size);
    }

    return 0;
}


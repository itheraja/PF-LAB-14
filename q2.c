#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int size, i;

    printf("Enter max size of string: ");
    scanf("%d", &size);
    getchar(); 

    str = (char*) malloc(size * sizeof(char));

    if (str == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    printf("Enter a line of text: ");
    fgets(str, size, stdin);

    printf("Reversed: ");
    for (i = size - 1; i >= 0; i--) {
        if (str[i] != '\0' && str[i] != '\n')
            printf("%c", str[i]);
    }

    free(str);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    char *result;
    int len;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len = strlen(str1) + strlen(str2) + 1;

    result = (char*) malloc(len * sizeof(char));

    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    free(result);
    return 0;
}

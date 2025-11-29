#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end && !isalpha(str[start]))
        start++;

    while (start < end && !isalpha(str[end]))
        end--;

    if (start >= end)
        return 1;

    if (tolower(str[start]) != tolower(str[end]))
        return 0;

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

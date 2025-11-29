#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    struct Student *s;

    printf("How many students? ");
    scanf("%d", &n);

    s = (struct Student*) malloc(n * sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("Students with marks > 75:\n");
    for (i = 0; i < n; i++) {
        if (s[i].marks > 75)
            printf("%s %d\n", s[i].name, s[i].marks);
    }

    free(s);
    return 0;
}

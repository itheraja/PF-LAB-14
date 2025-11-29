#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // free memory

    return 0;
}

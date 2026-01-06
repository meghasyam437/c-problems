#include <stdio.h>

int main() {
    int i, n, j, temp, array[100];

    printf("Number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Ascending order sorting
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Ascending order array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

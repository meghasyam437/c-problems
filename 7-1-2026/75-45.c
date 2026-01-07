#include <stdio.h>

int main() {
    int i, n;
    int sum = 0;
    float avg;

    scanf("%d", &n);

    int array[n];   // dynamic array size

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    avg = (float)sum / n;

    printf("Average = %.2f", avg);

    return 0;
}

#include <stdio.h>

// Function to swap numbers using call by reference
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Before swap
    printf("Before swap (by reference): a = %d, b = %d\n", a, b);

    // Function call
    swap(&a, &b);

    // After swap
    printf("After swap (by reference): a = %d, b = %d\n", a, b);

    return 0;
}
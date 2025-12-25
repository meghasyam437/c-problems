#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;

    printf("Enter an integer: ");

    // Check if input is valid
    if (scanf("%d", &number) == 1) {

        if (number > 0) {
            printf("You entered a positive number.\n");
        } 
        else if (number == 0) {
            printf("You entered zero.\n");
        } 
        else {
            printf("You entered a negative number.\n");
        }

    } else {
        // Handles invalid input
        printf("Invalid input. Please enter a valid integer.\n");
    }
    return 0;
}
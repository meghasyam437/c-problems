#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    char temp;

    // Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string manually
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Output
    printf("Reversed string: %s\n", str);

    return 0;
}
#include <stdio.h>

int main() {
    int n, temp, reverse = 0, rem;

    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if (n == reverse) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }

    return 0;
}

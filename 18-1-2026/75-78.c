#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[201];

    // read the whole line (password may include special characters)
    if (!fgets(s, sizeof(s), stdin)) return 0;

    // remove trailing newline if present
    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    for (size_t i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isupper(c)) hasUpper = 1;
        else if (islower(c)) hasLower = 1;
        else if (isdigit(c)) hasDigit = 1;
    }

    if (n >= 8 && hasUpper && hasLower && hasDigit)
        printf("Strong");
    else
        printf("Weak");

    return 0;
}

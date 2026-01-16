#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[100];
    int i, len, valid = 1;

    printf("Enter username: ");
    scanf("%s", username);

    len = strlen(username);

    // Rule 1: length 6 to 12
    if (len < 6 || len > 12) valid = 0;

    // Rule 2: should not start with a digit
    if (isdigit(username[0])) valid = 0;

    // Rule 3: only lowercase letters and digits
    for (i = 0; i < len; i++) {
        if (!(username[i] >= 'a' && username[i] <= 'z') &&
            !(username[i] >= '0' && username[i] <= '9')) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}
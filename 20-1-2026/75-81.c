#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char otp[1000];
    scanf("%s", otp);            // reads OTP as a string

    int n = (int)strlen(otp);

    if (n != 6) {
        printf("Invalid");
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        if (!isdigit((unsigned char)otp[i])) {
            printf("Invalid");
            return 0;
        }
    }

    printf("Valid");
    return 0;
}
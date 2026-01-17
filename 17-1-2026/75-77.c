#include <stdio.h>
#include <string.h>

int main() {
    char email[200];
    const char domain[] = "@company.com";

    // Read the email (no spaces expected)
    if (scanf("%199s", email) != 1) return 0;

    int emailLen = (int)strlen(email);
    int domainLen = (int)strlen(domain);

    if (emailLen >= domainLen && strcmp(email + (emailLen - domainLen), domain) == 0) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
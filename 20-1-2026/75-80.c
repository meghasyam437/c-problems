#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);              // reads a single word (no spaces)

    int i = 0, j = (int)strlen(s) - 1;
    int pal = 1;

    while (i < j) {
        if (s[i] != s[j]) {
            pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (pal) printf("Palindrome");
    else     printf("Not Palindrome");

    return 0;
}

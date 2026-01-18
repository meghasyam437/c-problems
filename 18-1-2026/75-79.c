#include <stdio.h>
#include <ctype.h>

int main() {
    char s[501];

    if (!fgets(s, sizeof(s), stdin)) return 0;

    int count = 0;
    int inWord = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];

        if (isspace(c)) {
            inWord = 0;               // we left a word (or are in spaces)
        } else {
            if (!inWord) {
                count++;              // new word starts
                inWord = 1;
            }
        }
    }

    printf("%d", count);
    return 0;
}
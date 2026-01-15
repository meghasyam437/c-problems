#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];

    // Read a full line (sentence)
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;

    int maxLen = 0, curLen = 0;
    char longest[1000] = {0}, current[1000] = {0};
    int ci = 0; // index for current word

    for (int i = 0; ; i++) {
        char ch = s[i];

        if (isalpha((unsigned char)ch)) {          // part of a word
            current[ci++] = ch;
            current[ci] = '\0';
            curLen++;
        } else {                                   // word ended (space/punct/\0/\n)
            if (curLen > maxLen) {
                maxLen = curLen;
                strcpy(longest, current);
            }
            // reset current word
            curLen = 0;
            ci = 0;
            current[0] = '\0';

            if (ch == '\0') break;                 // end of string
        }
    }

    printf("%s", longest);
    return 0;
}
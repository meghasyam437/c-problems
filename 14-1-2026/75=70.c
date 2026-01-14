#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    // remove trailing newline
    s[strcspn(s, "\n")] = '\0';

    int freq[256] = {0};
    int printed[256] = {0};

    // count frequencies (including spaces if you want; here we ignore spaces)
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (c == ' ') continue;   // ignore spaces
        freq[c]++;
    }

    // print in order of first appearance
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (c == ' ') continue;
        if (!printed[c]) {
            printf("%c%d", c, freq[c]);
            printed[c] = 1;

            // add space if more unique chars remain later
            int more = 0;
            for (int k = i + 1; s[k] != '\0'; k++) {
                unsigned char d = (unsigned char)s[k];
                if (d != ' ' && !printed[d]) { more = 1; break; }
            }
            if (more) printf(" ");
        }
    }

    return 0;
}
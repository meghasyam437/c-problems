#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    // remove trailing newline if present
    s[strcspn(s, "\n")] = '\0';

    int n = (int)strlen(s);
    int maxLen = 0, minLen = 100000;
    char largest[1000] = "", smallest[1000] = "";

    int i = 0;
    while (i < n) {
        // skip spaces
        while (i < n && s[i] == ' ') i++;
        if (i >= n) break;

        // collect a word
        char word[1000];
        int w = 0;
        while (i < n && s[i] != ' ') {
            word[w++] = s[i++];
        }
        word[w] = '\0';

        if (w > 0) {
            if (w > maxLen) {
                maxLen = w;
                strcpy(largest, word);
            }
            if (w < minLen) {
                minLen = w;
                strcpy(smallest, word);
            }
        }
    }

    printf("Largest: %s, Smallest: %s", largest, smallest);
    return 0;
}
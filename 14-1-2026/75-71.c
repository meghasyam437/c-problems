#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};

    // Read two strings (as words). If you need full sentences, tell me.
    scanf("%999s %999s", s1, s2);

    // Count characters of s1
    for (int i = 0; s1[i] != '\0'; i++) {
        unsigned char c = (unsigned char)tolower((unsigned char)s1[i]);
        freq[c]++;
    }

    // Subtract characters of s2
    for (int i = 0; s2[i] != '\0'; i++) {
        unsigned char c = (unsigned char)tolower((unsigned char)s2[i]);
        freq[c]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;

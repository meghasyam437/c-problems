#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);   // reads a single word

    int n = (int)strlen(s);

    // Bubble sort characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (s[j] > s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("%s", s);
    return 0;
}
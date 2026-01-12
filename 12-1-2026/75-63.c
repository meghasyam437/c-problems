#include <stdio.h>

int main() {
    int start, end;

    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;

        int prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    return 0;
}
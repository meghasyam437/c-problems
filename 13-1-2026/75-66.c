#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // Remove duplicates in-place
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                // shift left to delete a[j]
                for (int k = j; k < n - 1; k++) a[k] = a[k + 1];
                n--; // size reduced
            } else {
                j++;
            }
        }
    }

    // print unique array
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }

    return 0;
}
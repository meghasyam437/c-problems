#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);

    int a[1000], b[1000];

    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // print merged array (a then b)
    for (int i = 0; i < n1; i++) {
        printf("%d", a[i]);
        printf(" ");
    }
    for (int i = 0; i < n2; i++) {
        printf("%d", b[i]);
        if (i < n2 - 1) printf(" ");
    }

    return 0;
}
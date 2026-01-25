
    #include <stdio.h>

int maximum_of_two(int a, int b) {
    return (a >= b) ? a : b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", maximum_of_two(a, b));
    return 0;
}

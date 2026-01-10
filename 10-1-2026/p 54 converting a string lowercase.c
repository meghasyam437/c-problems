#include <stdio.h>
#include<string.h>
int main() {
    char c[30];
    fgets(c,30,stdin);
    strlwr(c);
    printf("%s",c);
    
    return 0;
}
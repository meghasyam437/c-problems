#include <stdio.h>
int main() {
    char str[100];
    int length=0;//Your Code goes here!
    printf("Enter a string:");
    scanf("%s",str);
    while(str[length] !='\0'){
        length++;
    }
    printf("lenth of strimg: %d",length);
    return 0;
}
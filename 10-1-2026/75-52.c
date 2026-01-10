#include <stdio.h>
#include<string.h>
int main() {
    char c[30];
    char a[sizeof(c)];
fgets(c,30,stdin);
int index=0;
for(int i=srlen(c)-1;i>=0;i--){
    a[index]=c[i];
    index++;
}int rev=strcmp(c,a);
if(rev==0){
    printf("Palindrome");
}else{
    printf("Not a  palindrome");
}
}
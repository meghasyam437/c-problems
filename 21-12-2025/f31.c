#include <stdio.h>
int main() {
   char a;
   scanf("%c",&a);
   if((a>='a')&&(a<='z')||(a>='A')&&(a<='Z')){
    printf("alphabet");}
    else if((a>='0')&&(a<='9')){
    printf("digit");}
   else {
    printf("special character");
   } //Your Code goes here!
    
    return 0;
}
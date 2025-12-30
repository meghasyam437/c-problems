#include <stdio.h>
#include<ctype.h>
int main() {
  
  char ch;
  scanf("%c",&ch);
  if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')){
    printf("alphabet");

  }
  else{
    printf("not alphabet");
  }
    return 0;
}
#include <stdio.h>
int main() {
  int a;
  printf("enter the password");
  scanf("%d",&a);
  if(a==1234){
    printf("Access granted");
  }  //Your Code goes here!
    else{
        printf("Not granted");
    }
    return 0;
}
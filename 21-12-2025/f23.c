#include <stdio.h>
int main() {
  int num;
  printf("enter the value");
  scanf("%d",&num);  //Your Code goes here!
    if(num%3==0||num%7==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
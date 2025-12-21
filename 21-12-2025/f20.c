#include <stdio.h>
int main() {
  int a;
  printf("enter the attendance");
  scanf("%d",&a);
  if(a>=75) {
    printf("Allowed");
  } //Your Code goes here!
    else{
        printf("Not allowed");
    }
    return 0;
}
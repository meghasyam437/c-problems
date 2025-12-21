
#include <stdio.h>
int main() {
  int number;
  printf("A single integer:");
  scanf("%d",&number);
  if(number%4==0&&number%8!=0){
    printf("yes");
  }
  else{
    printf("no");
  }
  //Your Code goes here!
    
    return 0;
}
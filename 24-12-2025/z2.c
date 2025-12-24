#include <stdio.h>
int main() {
  int salary,creditscore;
  scanf("%d %d",&salary,&creditscore);
  if(salary>=25000&&creditscore>=700){
    printf("eligible");
  }
else{
    printf("not eligible");
}
    return 0;
}
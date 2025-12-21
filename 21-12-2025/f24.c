#include <stdio.h>
int main() {
  int bill;
  printf("enter the bill");
  scanf("%d",&bill);
  int discount; 
   //Your Code goes here!
    if(bill>=5000)
    discount=bill*10/100;
    else
    discount=bill*5/100;
    printf("%d",bill-discount);
    return 0;
}
#include <stdio.h>
int main() {
   int bill;
   printf("enter the electricity");
   scanf("%d",&bill);
   if(bill<=100) 
   printf("%d",bill*=1);
   else {
    printf("%d",bill*=2);//Your Code goes here!
   }
    return 0;
}
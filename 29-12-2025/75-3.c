#include <stdio.h>
int main() {
   int num1,num2;
   printf("enter two numbeers");
   scanf("%d %d",&num1,&num2);
   if(num1>num2){
    printf("largest:%d",num1);
   } //Your Code goes here!
   else if(num2>num1){
    printf("largest=%d",num2);
   } 
   
    return 0;
}
#include <stdio.h>
int main() {
   int a;
   int b;
   printf("enter the prices");
   scanf("%d %d",&a,&b);
   if(b>a){
    printf("profit");
   } 
   else{
    printf("loss");//Your Code goes here!
   }
    return 0;
}
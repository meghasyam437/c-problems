#include <stdio.h>
int main() {
   int num;
   printf("Determine number type");
   scanf("%d",&num);
   if(num%2==0){
    printf("postive even");
   } 
   else if(num%3==0){
    printf("postive odd");//Your Code goes here!
   }
   else{
    printf("negative");
   }
    return 0;
}
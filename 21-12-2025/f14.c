#include <stdio.h>
int main() {
   int num;
   printf("A single integer N:");
   scanf("%d",&num);
   if(num%2==0&&num%3==0){
    printf("yes");
   }
   else{
    printf("no");
   }
    
    return 0;
}
#include <stdio.h>
int main() {
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age>=18){
    printf("eligilble ");
   } //Your Code goes here!
    else{
        printf("Not eligible");
    }
    return 0;
}
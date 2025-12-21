#include <stdio.h>
int main() {
   int marks;
   printf("A single integer reprsenting marks");
   scanf("%d",&marks);
   if(marks>=90){
   printf("A");
   }
   else if(marks>=75){
   printf("B");
   }
   else if(marks>=50){
    printf("c");
    }
    else{
        printf("fail");//Your Code goes here!
    }
    return 0;
}
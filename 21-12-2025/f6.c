#include <stdio.h>
int main() {
   int marks;
   printf("Enter your marks:"); //Your Code goes here!
    scanf("%d",&marks);
    if(marks>=40){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}
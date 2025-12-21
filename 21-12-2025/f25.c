#include <stdio.h>
int main() {
 int marks;
 printf("enter grace marks");
 scanf("%d",&marks);
 if(marks>=35){
    printf("pass");
 }   //Your Code goes here!
    else if(marks>=30){
        printf("grace pass");
    }
    else{
        printf("invalid");
    }
    return 0;
}
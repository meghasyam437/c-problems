#include <stdio.h>
int main() {
    int age;
    printf("A single integer age:");
    scanf("%d",&age);
    if(age<13){
        printf("child");//Your Code goes here!
    }
    else if(age<20){
        printf("Teen");
    }
    else{
        printf("adult");
    } 

    return 0;
}
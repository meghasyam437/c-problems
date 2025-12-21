#include <stdio.h>
int main() {
   int age;
   printf("enter age");
   scanf("%d",&age);
   int salary;
   printf("enter salary");
   scanf("%d",&salary);
   if(age>=25&&salary>=30000){
    printf("eligible");
    }
    else {
        printf("not eligible");//Your Code goes here!
    }
    return 0;
}
#include <stdio.h>
int main() {
 int salary;
 printf("enter the salary");
 scanf("%d",&salary);
 int tax;
  if(salary>=5000)
tax=salary*10/100;
  
  else{
    printf("no tax");
  }
  printf("%d",salary-tax);
    
    return 0;
}
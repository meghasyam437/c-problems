#include <stdio.h>
int main() {
  int num,i;
  long long factorial=1;
  scanf("%d",&num);
  if(num<0){
    printf("factorial is not defined for negative number");
  } 
  else{
    for(i=1;i<=num;i++){
        factorial*=i;
    }
    printf("%lld",factorial);
  } //Your Code goes here!
    
    return 0;
}
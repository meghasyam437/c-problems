#include <stdio.h>
int main() {
  int temprature;
  printf("enter the temprature:");
  scanf("%d",&temprature);
  if(temprature>30){
    printf("hot");
  }  //Your Code goes here!
    else{
        printf("normal");
    }
    return 0;
}
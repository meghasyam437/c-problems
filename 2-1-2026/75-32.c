#include <stdio.h>
int main() {
  int i,n,arr[100],sum=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
  } 
  printf("sum of array of elements");
  printf("%d",sum); //Your Code goes here!
    
    return 0;
}
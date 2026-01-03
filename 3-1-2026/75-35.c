#include <stdio.h>
int main() {
    int n,i,arr[100];
    int count=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }for(i=0;i<n;i++){
          if(arr[i]%2==0){
            count++;
          }
    }
          printf("%d Even numbers",count);
   
    return 0;
}
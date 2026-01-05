#include <stdio.h>
int main() {
   int i,n,array[100];
   int count=0;
   scanf("%d",&n);
   printf("elements of %d:\n",n);
   for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    if(array[i]<0){
        count++;
    }
   }
   printf("number of negative number=%d",count);//Your Code goes here!
    
    return 0;
}
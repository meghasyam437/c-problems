#include <stdio.h>
int main() {
   int i,temp,n,j,array[100];
   printf("enter the numbers:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&array[i]);
   } //Your Code goes here!
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("descending order:");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}
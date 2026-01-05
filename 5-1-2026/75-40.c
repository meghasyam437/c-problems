#include <stdio.h>
int main() {
    //Your Code goes here!
    int i,n,array[100];
    int count=0;
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]>0){
            count++;
        }
    }
    printf("number of postive number=%d\n",count);
        
    
    return 0;
}
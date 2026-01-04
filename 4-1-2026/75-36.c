#include <stdio.h>
int main() {
    int n,i,arr[100];
    int count=0;
    scanf("%d",&n);//Your Code goes here!
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%3==0);
        count++;
    }
    printf("%d odd numbers",count);
    return 0;
}
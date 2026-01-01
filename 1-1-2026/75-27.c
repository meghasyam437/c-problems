#include <stdio.h>
int main() {
    int n,i,x=1;
    printf("Enter the value:");
    scanf("%d",&n);

    if(n<=1){
        x=0;
    }else {
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                x=0;
                break;
            }
        }
    }
    if(x==1){
        printf("%d is Prime number",n);
    }else{
        printf("%d is Not a Prime number",n);
    }
    return 0;
}
#include <stdio.h>

int main() {
   int n,digit,temp;
   int sum=0,fact;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        digit=temp%10;
        fact = 1;
        for(int i=1;i<=digit;i++){
            fact =fact * i;
        }
        sum = sum+fact;
        temp =temp/10;
    }
    if(sum==n){
        printf("Storng Number");
    }
    else{
        printf("Not Strong Number");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int a,b,x,y;
    int  gcd,lcm;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    int temp;
    while(y!=0){
        temp = y;
        y= x%y;
        x = temp;
    }
    gcd=x; lcm=(a*b)/gcd;
    printf("LCM= %d",lcm);
    
    return 0;
}
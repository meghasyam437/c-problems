#include <stdio.h>
int main() {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b>c){
    printf("largest=%d",a);
    }
    else if(b>a){
        printf("largest=%d",b);
        }
        else{
            printf("largest=%d",c);
        }
        //Your Code goes here!
    
    return 0;
}
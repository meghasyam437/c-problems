#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    int third;
   if(n<=0){
    printf("Please Enter the Positive number");
   }else if(n==1){
    printf("%d",first);
   }
   else{
    printf("Fibanacci Series:");
    printf("%d %d",first,second);

    for(int i=3;i<=n;i++){
        third=first+second;
        first= second;
        second=third;
        printf(" %d ",third);
    }
   }
    return 0;
}
#include <stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Str1:");
    scanf("%s",&str1);
    printf("Str2:");
    scanf("%s",&str2);

    if(strcmp(str1, str2)==0){
        printf("Equal");
    }else{
        printf("Not Equal");
    }return 0;
}
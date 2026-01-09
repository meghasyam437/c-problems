#include <stdio.h>

int main(){
    char str1[100],str2[100];
    int i=0;
    scanf("%s",&str1);
    while(str1[i]!='\0'){
         str2[i]=str1[i];
         i++;  
    }
    printf("%s",str2);
}
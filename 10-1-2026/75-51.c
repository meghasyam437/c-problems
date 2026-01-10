
#include<stdio.h>
#include<string.h>
int main(){
    char c[20];
    int count=0;
    fgets(c,20,stdin);
    for(int i=0;c[i]!='\0';i++){
    if(c[i] >='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z'){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||
        c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'){
            
        }else{
            count++;
        }
    }
    }
    printf("%d",count);
    return 0;
}
#include <stdio.h>
int main() {
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0||year%100!=0||year%400==0)
     printf("Leap year");//Your Code goes here!
    
    else
    printf("Not Leap year");
    
    return 0;
}
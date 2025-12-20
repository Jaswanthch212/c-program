#include<stdio.h>
int main ()
{
    int year;
    printf("Enter an Year:");
    scanf("%d",&year);
    if(year%4==0||year%400==0&&year%100!=0)
    {
        printf("LEAP YEAR!");
    }
    else
    {
        printf("NOT LEAP YEAR!");
    }
    return 0;
}
#include<stdio.h>
int main ()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive number!");
    }
    else if(a<0)
    {
        printf("Negative number!");
    }
    else

    {
        printf("Neither Negative Nor Positive!");
    }
    return 0;
}
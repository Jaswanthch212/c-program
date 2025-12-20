#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three sides of Triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("Valid");
    }
    else
    {
        printf("Not Valid");
    }
}
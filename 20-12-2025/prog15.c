#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("EQUAL!");
    }
    else
    {
        printf("NOT EQUAL!");
    }
    return 0;
}
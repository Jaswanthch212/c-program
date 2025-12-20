#include<stdio.h>
int main ()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("YES!");
    }
    else
    {
        printf("NO!");
    }
    return 0;
}
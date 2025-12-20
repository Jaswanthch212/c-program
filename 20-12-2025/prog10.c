#include<stdio.h>
int main ()
{
    int temp;
    printf("Enter the Temperature:");
    scanf("%d",&temp);
    if(temp>30)
    {
        printf("HOT !");
    }
    else
    {
        printf("NORMAL !");
    }
    return 0;
}
#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("A");
    }
    else if(marks>=75&&marks<=90)
    {
        printf("B");
    }
    else if(marks>=50&&marks<=75)
    {
        printf("C");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}
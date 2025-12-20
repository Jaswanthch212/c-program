#include<stdio.h>
int main ()
{
    int salary,bonus;
    printf("Enter your salary :");
    scanf("%d",&salary);
    if(salary>=20000)
    {
        bonus =2000;
    }
    else
    {
        bonus =1000;
    }
    salary +=bonus;
    printf("%d",salary);
}
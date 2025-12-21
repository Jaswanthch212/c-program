#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your age:");
    scanf("%d",&age);
    if(age<=25)
    {
        printf("2000");
    }
    else if(age<=40&&age>25)
    {
        printf("4000");
    }
  
else
{
    printf("6000");
}
return 0;
}
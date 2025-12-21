#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("PASS");
    }
    else if(marks>=35&&marks<40)
    {
        printf("Grace Pass");
    }
   
else
{
    printf("FAIL");
}
return 0;
}
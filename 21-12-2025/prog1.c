#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("'A+'");
    }
    else if(marks>=80&&marks<90)
    {
        printf("A");
    }
    else if(marks>=70&&marks<80)
{
    printf("B");
}
else if(marks>=60&&marks<70)
{
    printf("C");
}
else
{
    printf("FAIL");
}
return 0;
}
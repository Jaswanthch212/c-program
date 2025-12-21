#include <stdio.h>
int main() {
int marks,income;
printf("Enter the marks and income :");
scanf("%d%d",&marks,&income);
if(marks>=85&&income<=200000)
{
    printf("Eligible");
}   

else
{
    printf("not Eligible");
}  
    return 0;
}
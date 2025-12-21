#include <stdio.h>
int main() {
int salary;
printf("Enter Your Salary:");
scanf("%d",&salary);
if(salary>=30000)
{
    salary=(0.1*salary+salary);
    printf("%d",salary);
}    
else
{
    salary=(salary*.15+salary);
    printf("%d",salary);
}
    return 0;
}
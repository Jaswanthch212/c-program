#include <stdio.h>
int main() {
int salary,creditscore;
printf("Enter salary And creditscore :")  ;
scanf("%d%d",&salary,&creditscore);
if(salary>=25000&&creditscore>=700)
{
    printf("Eligible");
}  
else
{
    printf("Not Eligible");
}
    return 0;
}
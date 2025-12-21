#include <stdio.h>
int main() {
int data_usage;
printf("Enter the data_usage :");
scanf("%d",&data_usage);
if(data_usage<=1)
{
    printf("High Speed");
}   
else if(data_usage<=2&&data_usage>1)
{
    printf("Medium Speed");
}   

else
{
    printf("Low Speed");
}  
    return 0;
}
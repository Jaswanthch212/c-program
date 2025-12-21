#include <stdio.h>
int main() {
int hours,overpay;
printf("Enter Hours:");
scanf("%d",&hours);
if (hours>40)
{
overpay=(hours-40)*200;
printf("%d",overpay);
}   
else
{
    printf("0");
} 
    return 0;
}
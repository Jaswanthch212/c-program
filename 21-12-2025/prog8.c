#include <stdio.h>
int main() {
int amount;
printf("Enter amount :");
scanf("%d",&amount);
if(amount>=10000)
{
    amount=(amount-0.2*amount);
    printf("%d",amount);
}    
else if(amount>=5000&&amount<10000)
{
    amount=(amount-0.1*amount);
    printf("%d",amount);
}
else
{
    amount=(amount-amount*.05);
    printf("%d",amount);
}
    return 0;
}
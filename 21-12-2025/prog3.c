#include<stdio.h>
int main()
{
    int units,cost;
    printf("Enter no.of Units:");
    scanf("%d",&units);
    if(units<=100)
    {
cost=units*1;
printf("%d",cost);
}
else 
{
    cost=units*2;
    printf("%d",cost);
}
return 0;
}
#include <stdio.h>
int main() {
int i,percent,hours,dph,remaining,sum=0;      //dph = drain per hour
scanf("%d %d",&percent,&hours);
for(i=1;i<=hours;i++)
{
    scanf("%d",&dph);
    sum=sum+dph;
}
remaining=percent-sum;
printf("Remaining Battery = %d",remaining);
    return 0;
}
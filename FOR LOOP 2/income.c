#include <stdio.h>
int main() {
int  i,n,income,count=0,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&income);
    sum=sum+income;
printf("%d\n",income);

if(income>1000)
count++;
}

printf("Total expense = %d\n",sum);
printf("over spend days = %d",count);
    return 0;
}
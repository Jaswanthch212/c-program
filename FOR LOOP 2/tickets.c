#include <stdio.h>
int main() {
int i,n,price,sum = 0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&price);
    sum=sum+price;
}  
printf("Total Collection = %d",sum);

    return 0;
}





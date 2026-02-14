#include <stdio.h>
int main() {
int n,i,sum=0;
scanf("%d",&n);
for(i=2;i<=n;i+=2)
{
    sum=sum+i;
}    
printf("sum of even numbers upto %d = %d ",n,sum);
    return 0;
}
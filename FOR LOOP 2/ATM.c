#include <stdio.h>
int main() {
int i,n,money,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&money);
    sum=sum+money;
    
}
if(sum<=10000)
printf("APPROVED");
else
printf("LIMIT EXCEEDED");
    return 0;
}
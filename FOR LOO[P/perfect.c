#include <stdio.h>
int main() {
int i,n,sum=0;
scanf("%d",&n);
for(i=1;i<=n/2;i++)
if(n%i==0)
sum+=i;
if(sum==n)
printf("PERFECT NUMBER");
else
printf(" NOT A PERFECT NUMBER");
    
    return 0;
}
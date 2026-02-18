#include <stdio.h>
int main() {
    int n,i,sum=0,units;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&units);
        sum=sum+units;
    }
    printf("TOTAL UNITS = %d",sum);
    return 0;
}
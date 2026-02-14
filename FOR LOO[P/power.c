#include <stdio.h>
int main() {
int base,exp,i,result=1;
scanf("%d %d",&base,&exp);
for(i=1;i<=exp;i++)
{
    result*=base;
}    
printf("%d",result);
    return 0;
}
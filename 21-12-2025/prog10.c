#include <stdio.h>
int main() {
int balance,wamount;
printf("Enter Balance And Withdrawl Amount:")  ;
scanf("%d%d",&balance,&wamount);
if(wamount+500<balance)
{
    printf("Success");
}  
else
{
    printf("Failed");
}
    return 0;
}
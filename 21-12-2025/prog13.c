#include <stdio.h>
int main() {
int num;
printf("Enter an Integer:") ;
scanf("%d",&num);
if(num>0&&num%2==0)   
{
    printf("positive even");
}
else if(num<0&&num%2==0)   
{
    printf("Negative even");
} 
else if(num<0&&num%2!=0)   
{
    printf("Negative odd");
} 
else if(num>0&&num%2!=0)   
{
    printf("positive odd");
} 
else
{
    printf("invalid input");
}
    return 0;
}
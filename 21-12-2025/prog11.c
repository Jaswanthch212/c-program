#include <stdio.h>
int main() {
int rating;
printf("Enter the Rating :");
scanf("%d",&rating);
if(rating==5)
{
    printf("5000");
}   
else if(rating==4)
{
    printf("3000");
}   
else if(rating==3)
{
    printf("1000");
}  
else
{
    printf("0");
}  
    return 0;
}
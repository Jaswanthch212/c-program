#include <stdio.h>
int main() {
int rating;
printf("Enter the Rating :");
scanf("%d",&rating);
if(rating>=8)
{
    printf("Excellent");
}   
else if(rating>=5&&rating<8)
{
    printf("Average");
}   

else
{
    printf("Poor");
}  
    return 0;
}
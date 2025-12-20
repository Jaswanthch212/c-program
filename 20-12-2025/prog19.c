#include <stdio.h>
int main() {
    int percentage;
    printf("Enter your Attendence Percentage:");
    scanf("%d",&percentage);
    if(percentage>=75)
    {
        printf("Allowed");
    }
    else
    {
        printf("Not Allowed");
    }
    return 0;
}
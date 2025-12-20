#include <stdio.h>
int main() {
    int experience,bonus;
    printf("Enter your Experience:");
    scanf("%d",&experience);
    if(experience>=5)
    {
        printf("5000");
    }
    else
    {
        printf("2000");
    }
    return 0;
}
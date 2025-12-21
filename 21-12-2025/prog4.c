#include<stdio.h>
int main ()
{
    int s1,s2,s3 ;
    printf("Enter 3 Sides of a Triangle:");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2==s3)
    {
        printf("Equilatreral Triangle!");
    }
    else if(s1==s2||s2==s3||s3==s1)
    {
        printf("Isoceles Triangle!");
    }
    else
    {
        printf("Scalene Triangle!");
    }
    return 0;
}
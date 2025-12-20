#include<stdio.h>
int main ()
{
    char x,a,e,i,o,u;
     printf("Enter a charecter:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("Vowel!");
    }
    else
    {
        printf("Consonant!");
    }
    return 0;
}
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a charecter :");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
    {
        printf("DIGIT");
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("SPECIAL CHARECTER");
    }
    return 0;
}
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a charecter :");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
    {
        printf("DIGIT");
    }
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("ALPHABET");
    }
    else
    {
        printf("SPECIAL CHARECTER");
    }
    return 0;
}
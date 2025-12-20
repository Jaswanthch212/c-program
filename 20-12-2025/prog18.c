#include <stdio.h>
int main() {
    int cp,sp;
    printf("Enter cp and sp:");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("PROFIT");
    }
    else
    {
        printf("LOSS");
    }
    return 0;
}
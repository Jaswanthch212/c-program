#include <stdio.h>
int main() {
int age,testscore;
printf("Enter age And testscore :")  ;
scanf("%d%d",&age,&testscore);
if(age>=18&&testscore>=60)
{
    printf("Qualified");
}  
else
{
    printf("Not Qualified");
}
    return 0;
}
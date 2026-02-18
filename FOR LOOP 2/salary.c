#include <stdio.h>
int main() {
int salary,leave_days,total;
scanf("%d  %d",&salary,&leave_days);
total=salary-(leave_days*100);
printf("FINAL SALARY = %d",total);    
    return 0;
}
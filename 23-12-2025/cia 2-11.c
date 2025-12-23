#include<stdio.h>
struct Student{
char name[50];
int roll;
int marks;
};


int main()
{
    int i,n,max;
    struct Student s[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",&s[i].name,&s[i].roll,&s[i].marks);
    }


max=s[0].marks;
for(i=1;i<n;i++)
{
    if(s[i].marks>max)
    {
        max = s[i].marks;
    }
}

for(i=0;i<n;i++)
{
    if(s[i].marks>max){
        printf("%s %d %d",s[i].name,s[i].roll,s[i].marks);

    }
}
return 0;
}
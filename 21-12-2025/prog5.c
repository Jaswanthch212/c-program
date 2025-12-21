#include <stdio.h>
int main() {
    char username[50];
    int password;
    printf("Enter User Name  Password :");
    scanf("%s%d",&username,&password);
    if(username=="admin"&& password==1234)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Login Failed");
    }
    return 0;
}
#include<stdio.h> 
int main() 
{ 
    FILE *fp; 
    char ch; 
    fp = fopen("one.txt", "w"); 
    while( (ch = getchar()) != EOF) {         
        if(ch=='E') 
            break; 
        putc(ch, fp); 
    } 
    fclose(fp); 
    fp = fopen("one.txt", "r"); 
    while((ch = getc(fp))!= EOF) 
     {   printf("%c",ch); } 
    fclose(fp); 
    return 0;

}
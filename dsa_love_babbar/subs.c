#include<stdio.h>
#include<string.h>
char str(char str,int t)
{   
    int k;
    if(k==t)
    {
        return 0;
    }
    k=0;
    printf("%s",str[k]);
    k++;
}
int main()
{
    char str[100];
    gets(str);
    int t = strlen(str)-1;
    for(int i=0;i<strlen(str)-1;i++)
    {
        
    }
}
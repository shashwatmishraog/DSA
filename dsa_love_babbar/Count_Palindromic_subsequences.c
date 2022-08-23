#include<stdio.h>
#include<string.h>
int main()
{   
    int p=0,x=0;
    char str[100];
    gets(str);
    int t = strlen(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==str[i+1])
        {
            p++;
        }
    }
    printf("\n%d",t+p);
}
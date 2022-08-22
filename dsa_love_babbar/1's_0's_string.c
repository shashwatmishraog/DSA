#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,c=0;
    char str[100];
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            a++;
        }
        else
        b++;
        
        if(a == b)
        {
            c++;
        }
    }
    printf("%d",c);
}
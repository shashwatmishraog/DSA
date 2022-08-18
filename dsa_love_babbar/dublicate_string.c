#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int t=0;
    gets(s);
    for(int i=0;i<strlen(s)-1;i++)
    {
        for(int j=0;j<strlen(s)-1;j++)
        {
            if(s[i]==s[j])
            {
                t++;
            }
        }
    }
    printf("%d",t-strlen(s-1));
    return 0;
}
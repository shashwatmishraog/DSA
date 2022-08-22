#include<stdio.h>
#include<string.h>
int main()
{
    int b=0,c=0;
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='{'||str[i]=='('||str[i]=='[')
        {
            b++;
        }
        else if(str[i]=='}' ||str[i]==')' || str[i]==']')
        {
            c++;
        }
    }
    if(c==b)
    {
        printf("The parenthesis is balanced");
    }
    else
    {
        printf("The parenthesis are not balanced ");
    }
    return 0;
}
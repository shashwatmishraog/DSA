#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,s=0;
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='{')
        {
            c++;
        }
        else if(str[i]=='}')
        {
            s++;
        }
    }
    printf("%d %d",c,s);
    if(c==s)
    {
        printf("The parentheis is balanced\n");
    }
    else if(c>s)
    {
        printf("to balance the string you need %d closing parenthesis",c-s);
    }
    else{
        printf("to balance the string you need %d opening parenthesis",s-c);
        
    }
    return 0;
}
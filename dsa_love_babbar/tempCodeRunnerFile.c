#include<stdio.h>
#include<string.h>
void function(char str2[100],int i,int n,char str[100])
{
    if(i==n)
    {
        puts(str2);
    }
    else 
    {
         function(str2,i+1,n,str);
         str2=str2+str[i];
         function(str2,i+1,n,str);
    }

}
int main()
{
    char str[100],str2[100];
    gets(str);
    function(str2,0,strlen(str),str);
}
#include<stdio.h>
#include<string.h>
int main()
{
    int count,i=0;
    char str1[10],str2[10],str3[10],res[10];
    gets(str1);
    gets(str2);
    gets(str3);
    while(1>0)
    {
                if(str1[i]==str2[i] && str2[i]==str3[i])
                {
                    str1[i]=res[i];
                }
                else
                {
                    goto label;
                }
                i++;
    }
    label : puts(res);
    return 0;
}
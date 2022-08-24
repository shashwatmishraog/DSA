#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int n=strlen(str);
    int arr[n];
    int i=0,sum=0;
    label: switch(str[i])
    {
        case 'I':
                 arr[i]=1;
                 break;
        case 'V':
                 arr[i]=5;
                 break;
         case 'X':
                 arr[i]=10;
                 break;

        case 'L':
                 arr[i]= 50;
                 break;
        case 'C':
                 arr[i]=100;
                 break;
        case 'D':
                 arr[i]=500;
                 break;
        case 'M':
                 arr[i]=1000;
                 break;
                 
    }
    if(i=!n)
    {
        i++;
        goto label;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\n%d\n",sum);
}
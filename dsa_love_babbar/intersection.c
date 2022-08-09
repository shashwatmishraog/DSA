#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n],t=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
    if(arr[i]==arr1[i])
    { 
        arr2[i]=arr[i];
        t++;
    }
    }
    for(int i=0;i<t;i++)
    {
        printf("%d ",arr2[i]);
    }
}
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        arr1[n-i-1]=arr[i];
    }
    for(int i = k;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr1[i]);
    }
}
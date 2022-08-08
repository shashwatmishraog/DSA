#include<stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr2[t]=arr[i];
            t++;
        }
    }
      for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            arr2[t]=arr[i];
            t++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
}
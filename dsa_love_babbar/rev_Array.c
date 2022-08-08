#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);   
        }
        for(int i=n-1;i>=0;i--)
        {
         printf("%d ",arr[i]);   
        }
    }
}





#include<stdio.h>
int main()
{
    int n,currentsum=0,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currentsum=0;
            for(int k=i;k<=j;k++)
            {
            currentsum+=arr[k];
            }
        
        if(currentsum>sum)
        {
            sum=currentsum;
        }
        }
    }
    printf("%d",sum);
}
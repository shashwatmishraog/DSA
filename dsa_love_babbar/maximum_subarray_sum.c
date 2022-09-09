#include<stdio.h>
int main()
{
    int n,currentsum=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        currentsum +=arr[i];
        if(currentsum>=sum)
        {
            sum+=currentsum;
        }
    currentsum=0;
    }
    printf("%d",sum);
}
#include<stdio.h>
int main()
{
    int n,largest,smallest;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest=arr[0];
    largest=arr[0];
     for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("\n%d",largest);
    printf("\n%d",smallest);
    return 0;
}
//best time to sell stock
#include<stdio.h>
int main()
{
    int n,buy,j=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    buy = arr[0];
    int sell = arr[0];
    for(int i=0;i<n;i++)
    {
       if(arr[i] < buy)
       {
        buy = arr[i];
        j=i;
       }
    }
    for(int i=j;i<n;i++)
    {
        if(buy<arr[i])
        {
            sell = i;
        }
    }
    printf("%d",sell);
}
//best time to sell stock
#include<stdio.h>
int main()
{
    int n,buy,j=0,sell2;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    buy = arr[0];
    int sell = 0;
     for(int i=1;i<n;i++)
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
            buy = arr[i];
            sell = i+1;
        }
    }

    buy=arr[0]; 

      for(int i=1;i<n;i++)
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
            buy = arr[i];
            sell2 = i+1;
        }
    }
    printf("%d",sell+sell2);
}
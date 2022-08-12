#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],arr1[n],arr3[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[i+1])
            {
                int t =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i%2 != 0)
        {
            arr1[i]=arr[i];
        }

        else
        {
            arr1[i] = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}
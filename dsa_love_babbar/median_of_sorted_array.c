#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
        if(n%2==0)
        {
            printf("%d",((arr[n/2]+arr[n/2+1])/2));
        }
        else
        {
            printf("%d",arr[n/2]);
        }
    return 0;
}
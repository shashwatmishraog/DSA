#include<stdio.h>
int main()
{
    int n,c=1,m=0;
    printf("Enter the sixe of the array\n");
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]==1)
        {
            c++;
        }
        else
        {
            if(c>m)
            {
                m=c;
            }
        }
    }
    printf("\n%d",m);
}
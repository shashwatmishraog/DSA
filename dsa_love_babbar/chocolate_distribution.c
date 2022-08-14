#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the no. of students\n");
    scanf("%d",&m);
    int arr[n],arr2[n];
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
    for(int i=0;i<m;i++)
    {
        arr2[i]=arr[i];
    }
    printf("\n%d",(arr[m-1]-arr[0]));
}
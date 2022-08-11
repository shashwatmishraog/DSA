#include<stdio.h>
int main()
{
    int n,t,z=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the sum\n");
    scanf("%d",&t);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
               z++;
            }
        }
    }
    printf("\n%d",z);
}
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],max=arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            max=arr[i];
        }
        else if(max-arr[i+1]>0)
        {
            c+=max-arr[i+1];
        }
    }

    printf("\n%d",c);
    return 0;
}
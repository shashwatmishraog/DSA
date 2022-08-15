#include<stdio.h>
int main()
{
    int n,x,c=0,i=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the no. to be searched")
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d"  ,&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c+=arr[i]
        for(int j=i+1;j<n;j++)
        {
            c+=arr[j];
            if(c==x)
            {
                printf("%d",c);
            }
        }
        c=0;
    }
}
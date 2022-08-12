#include<stdio.h>
int main()
{
    int n,cs=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        cs = 0;
        for(int i=j;i<n;i++)
        {
            cs += arr[i];
            if(cs == 0)
            {
                printf("Yes\n");
            }
        }
    }
}
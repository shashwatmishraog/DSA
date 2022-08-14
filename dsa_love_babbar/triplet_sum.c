#include<stdio.h>
int main()
{
    int n,g,c=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the number to be found\n");
    scanf("%d",&g);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k] == g)
                {
                    c++;
                }
            }
        }
    }
    printf("\n%d",c);
}
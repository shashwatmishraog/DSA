#include<stdio.h>
int main()
{
    int n,m,c=0;
    printf("Enter the size of 1st and 2nd array\n");
    scanf("%d %d",&n,&m);
    int arr[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr2[i]==arr[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
    if(c==m)
    {
        printf("\nyes");
    }
    else 
    {
        printf("\nNo");
    }
    return 0;
}


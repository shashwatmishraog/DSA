#include<stdio.h>
int main()
{
    int n,m,c=n+m;
    printf("Enter the size of the row and the column\n");
    scanf("%d %d",&n,&m);
    int arr[n][m],arr1[c];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr1[c]=arr[i][j];
            c++
        }
    }
    c=n+m;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int t =arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
            }
        }
    }
    for (int  i = 0; i < c; i++)
    {
        if(arr1[i] = arr1[i+1])
        {
            printf("%d ",arr[i]);
        }
    }
    
}
// 
#include<stdio.h>
int main()
{
    int n,m,v=n+m,c=0;
    printf("Enter the row and the column size\n");
    scanf("%d %d",&n,&m);
    int arr[n][m],arr2[v];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           arr2[c]=arr[i][j];
           c++;
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(arr2[j]>arr[j+1])
            {
                int t =arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=t;
            }
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=arr2[c];
            c++;
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    
}
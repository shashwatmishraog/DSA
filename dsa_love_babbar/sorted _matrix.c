#include<stdio.h>
int main()
{
    int n,m,k=0,v=0;
    printf("Enter the size of row and the column\n");
    scanf("%d %d",&n,&m);
    int c=n*m;
    int arr[n][m],arr2[c];
    printf("Enter the matrix elements \n");
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
            arr2[k]=arr[i][j];
            k++;
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                int t=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=arr2[v];
            v++;
        }
    }
    
}
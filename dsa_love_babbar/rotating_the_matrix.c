#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of row and column\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
           printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
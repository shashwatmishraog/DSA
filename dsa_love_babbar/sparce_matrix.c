#include<stdio.h>
int main()
{
    int n,m,a=0,b=0;
    printf("Enter the row and column size\n");
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
        for(int j=0;j<m;j++)
        {
            a++;
        }
    }

    int arr1[a][3];
    a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] != 0)
            {
                arr1[a][b]=i;
                arr1[a][++b]=j;
                arr1[a][++b]=arr[i][j];
                a++;
                b=0;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
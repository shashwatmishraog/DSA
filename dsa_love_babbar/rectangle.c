#include<stdio.h>
int main()
{
    int n,m,c=0,s=0;
    printf("Enter the row and the column size\n");
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
            if(arr[i][j]==1)
            {c++ ;}
        }
        if(c==m)
        {
            s++;
        }
        c=0;
    }
    printf("\n%d",(s*m));
}
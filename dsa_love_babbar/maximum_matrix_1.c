#include<stdio.h>
int main()
{
    int n,m,k=0,max=0;
    printf("Enter the size of the row and the column\n");
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
        k=0;
        for(int j=0;j<m;j++)
        {
          if(arr[i][j]==1)
          {
            k++;
          }  
        }
        if(max<k)
        {
            max=k;
        }
    }
    printf("\n%d",max);
}
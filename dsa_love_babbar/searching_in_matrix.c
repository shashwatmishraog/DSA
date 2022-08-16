#include<stdio.h>
int main()
{
    int n,m,k;
    printf("Enter the size of row and column\n");
    scanf("%d %d",&n,&m);
    printf("Enter the element to be searched\n");
    scanf("%d",&k);
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
            if(k==arr[i][j])
            {
                printf("The element was found at %d row and %d column",i+1,j+1);
            }
        }
    }
    return 0;
}
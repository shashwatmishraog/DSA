#include<stdio.h>
int main()
{
    int n,m,c=n+m,x;
    printf("Enter the size of the row and column\n");
    scanf("%d %d",&n,&m);
    printf("Enter the no. of smallest no. to be found\n");
    scanf("%d",&x);
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
        for(int j=0;j<n;j++)
        {
            arr1[c]=arr[i][j];
            c++;
        }
    }
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int t =arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
            }
        }

    }
    printf("The no is %d ",arr1[x-1]);
    return 0;
}
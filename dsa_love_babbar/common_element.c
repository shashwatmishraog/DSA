#include<stdio.h>
int main()
{
    int n,m,o;
    printf("Enter the size of the first,seconf and third order respectively\n");
    scanf("%d %d %d",&n,&m,&o);
    int arr1[n],arr2[m],arr3[o];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<o;i++)
    {
        scanf("%d",&arr3[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            for(int k=j;k<o;k++)
            {
                if(arr1[k]==arr2[k] && arr1[k]==arr3[k])
                {
                    printf("%d ",arr1[k]);
                }
            }
        }
    }
}
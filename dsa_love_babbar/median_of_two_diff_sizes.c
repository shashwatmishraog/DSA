#include<stdio.h>
int main()
{
    int n,m,c,o=0;
    printf("Enter the size of the 1st and 2nd array\n");
    scanf("%d %d",&n,&m);
    c=m+n;
    int arr[n],arr2[m],arr3[c];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr[i];
        o++;
    }
    for(int i=0;i<m;i++)
    {
        arr3[o]=arr2[i];
        o++;
    }
    for(int i=0;i<c;i++)
    {
        for(int  j=0;j<o;j++)
        {
            if(arr3[j]>arr[j+1])
            {
                int t =arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=t;
            }
        }
    }
    if(c%2==0)
    {
        printf("%d",(arr3[c/2]+arr3[c/2-1])/2);
    }
    else 
    {
        printf("%d",arr3[c/2]);
    }
    return 0;
}

#include<stdio.h>
void insertion(int *a,int n)
{
    int k,j;
    for(int i=1;i<n;i++)
    {   
        k =a[i];
        j=i-1;
        while( j >=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;

    }
}
int main()
{
    int a[]={1,3,4,5,2,1,6,7};
    int n=8;
    insertion(&a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0 ;
}
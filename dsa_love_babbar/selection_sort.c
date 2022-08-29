#include<stdio.h>

void selection_sort(int* a,int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min =i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min = j;
            }
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}
int main()
{
    int a[]={1,4,3,5,6,7};
    int n =5;
    selection_sort(&a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
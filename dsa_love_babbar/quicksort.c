#include<stdio.h>

void quick_sort(int a[],int low,int high)
{

    int partition_index;//index of pivot after the partition
    if(low<high)
    {
    partition_index= partition(a,low,high);
    quick_sort(a,low,partition_index-1);
    quick_sort(a,partition_index+1,high);
    }
}

int partition(int a[],int low, int high)
{
    int pivot = a[low];
    int i = low+1;
    int j = high;
    
    do
    {
    while (a[i]<=pivot)
    {
       i++;
    }
     
     while (a[j]>pivot)
    {
       j--;
    }
    
    if(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
    while (i<j);

    int t =a[low];
    a[low]=a[j];
    a[j]=t;

    return j;
}
int main()
{
    int a[]={1,4,3,5,6,7};
    int n =6;
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
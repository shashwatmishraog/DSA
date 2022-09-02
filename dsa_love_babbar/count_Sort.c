#include<stdio.h>
#include<limits.h>

void count_sort(int *a,int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    int* count=(int *)malloc(max+1*sizeof(int));
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
}
int main()
{
    int max=0;
    int arr[]={8,5,6,44,2,1};
    int n=sizeof(arr)/sizeof(int);
    count_sort(arr,n);

}
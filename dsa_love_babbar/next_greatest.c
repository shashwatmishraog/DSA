#include<stdio.h>
void descending(int* arr,int n)
{
    int c=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
            c++;
            // printf(" %d ",arr[i]);
        }
    }
    if(arr[n-1]<arr[n-2])
    {
        c++;
    }
    if(c==n)
    {
       printf("Not Possible\n");
    }
}

void ascending(int* arr,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    printf("%d ",c);
    if(c==n)
    {
        int t =arr[n-1];
        arr[n-1]=arr[n-2];
        arr[n-2]=t;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void swap(int* a,int* b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int n,c=0,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   descending(&arr,n);
   ascending(&arr,n);
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]<arr[i+1])
    //     {
    //         c++;
    //     }
    // }
    // printf("%d ",c);
    // if(c==n)
    // {
    //     int t =arr[n-1];
    //     arr[n-1]=arr[n-2];
    //     arr[n-2]=t;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    return ;
}
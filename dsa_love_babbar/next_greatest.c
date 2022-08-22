#include<stdio.h>
int descending(int* arr,int n)
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
       return 1;
    }
    return 0;
}

int ascending(int* arr,int n)
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
        return 1;
    }
    return 0;
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
   if(!descending)
   {ascending(&arr,n);}
   if(!descending &&  !ascending)
   {
    int t=arr[1];
    arr[1]=arr[n-1];
    arr[n-1]=t;
   }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}
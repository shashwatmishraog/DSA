#include<stdio.h>
int main()
{
    int n,k,o=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k= arr[0];
    for(int i=0;i<n-1;i++)
    {
            if(k<arr[i])
            {
                k=arr[i];
                o++;
            }
    }
    printf("%d",o);
}
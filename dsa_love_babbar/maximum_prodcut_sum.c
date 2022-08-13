#include<stdio.h>
int main()
{
    int cs=1,ms=0;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {    
        cs*=arr[i];
        if(cs>ms)
        {
            ms = cs;
        }
    }
   printf("%d",ms);
    
}
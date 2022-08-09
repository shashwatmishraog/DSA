#include<stdio.h>
int main()
{
    int n,k,currentdiff=0,diff=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("\nEnter the size of the tower\n");
   scanf("%d",&k);
   for(int i=0;i<n;i++)
   {
    currentdiff = k-arr[i];
    if(currentdiff>diff)
    {
        diff= currentdiff;
    }
    currentdiff = 0;
   }
   printf("%d",diff);
}
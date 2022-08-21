#include<stdio.h>
void main()
{
    int n,k,c=0;
    int count=1;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    int l=(n/k);
    int a[n];
    printf("\nThe n/k value is: %d",(n/k));
    printf("\nEnter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
      for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n-i-1;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("%d",count);
        if(count>l)
        {
            c++;
            printf("\n%d",c);
        }
    }
    printf("The count is: %d",c);
}
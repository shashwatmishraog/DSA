#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of 1st array\n");
    scanf("%d",&n);
    int arr1[100],arr2[100];
    printf("Enter the elements of first array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&m);
    printf("Enter the elements of second  array \n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr2[j]<=arr1[i])
            {
                int t = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = t;
            }
            for(int i=0;i<n;i++)
            {
                if(arr2[i]>=arr2[i])
                {
                    int t = arr2[i];
                    arr2[i] = arr2[i+1];
                    arr2[i+1] = t;
                }
            }
        }
    }
    for(int i=0 ;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr2[i]);
    }
}
// #include<stdio.h>
// int main()
// {
//     int n,m;
//     printf("Enter the size of 1st array\n");
//     scanf("%d",&n);
//     int arr1[n],arr2[m];
//     printf("Enter the elements of first array\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     printf("Enter the elements of second  array \n");
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(arr2[j]<arr1[i])
//             {
//                 int t = arr1[i];
//                 arr1[i] = arr2[j];
//                 arr2[j] = t;
//             }
//             for(int i=0;i<n;i++)
//             {
//                 if(arr2[i]>arr2[i])
//                 {
//                     int t = arr2[i];
//                     arr2[i] = arr2[i+1];
//                     arr2[i+1] = t;
//                 }
//             }
//         }
//     }
//     for(int i=0 ;i<n;i++)
//     {
//         printf("%d",arr1[i]);
//     }
//     for(int i=0 ;i<n;i++)
//     {
//         printf("%d",arr2[i]);
//     }
// }
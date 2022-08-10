// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of an array \n");
//     scanf("%d",&n);
//     int arr[n],arr2[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);     
//     }
//     for(int i=0;i<n;i++)
//     {
//         arr2[i] = arr[i];  
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr2[i]>arr[i+1])
//         {
//             int t=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1] =t;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<arr2[i])
//         {
//             int t =arr[i];
//             arr[i] = arr[n-1];
//             arr[n-1]=t;
//         }
//         for(int j=0;j<n;j++)
//         {
//              if(arr[j]>arr[j+1])
//         {
//             int t=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1] =t;
//         }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//     printf("%d ",arr[i]);
//     }
    
// }
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    
    for(int j=0;j<n;j++)
    {for(int i=j;i<n-j;i++)
    {
        if(arr2[i]>arr2[i+1])
        {
            int t = arr2[i];
            arr2[i]=arr2[i+1];
            arr2[i+1]=t;
        }
    }}

    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",arr2[i]);
    // }
    
    printf("\n");

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr2[i])
        {
            int t = arr[i];
            arr[i] = arr[n-1];
            arr[n-1] = t;
        }

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
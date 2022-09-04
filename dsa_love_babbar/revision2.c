#include<stdio.h>
#include<string.h>
// void swap(int *p,int *q)
// {
//     int t;
//      t=*p;
//      *p=*q;
//      *q=t;
// }
// void main()
// {
// int a=10,b=22;
// swap(&a,&b);
// }
// printf("%d,%d",a,b);
//2
// void bubble(int *p)
// {
//   for(int i=0;i<10;i++)
//   {
//      for(int j=0;j<10-i-1;j++)
//      {
//        if(p[j]<p[j+1])
//        {
//         int t=p[j];
//         p[j]=p[j+1];
//         p[j+1]=t;
//        }

//      }
//   }
// }
// void main()
// {
//     int arr[10]={1,2,3,5,8,5,6,9,7,1};
//     int *p;
//     p=arr;
//     bubble(p);
//     for(int i=0;i<10;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }

// void factorial(int n)
// {
//     if(n>1)
//     { 
//         return 1;
//     }
//     int fact1 = factorial(n-1);
//     int facto=(fact1)+n;
//     printf("%d",facto);
// }
// void main()
// {
//     int n=10;
//     factorial(n);
// }
// void binaryseach(int *n,int k)
// {
//     int start=n[0];
//     int end=n[9];
//     int mid=(start+end)/2;
//     for(int i=0;i<10;i++)
//     {
//         if(n[i]==k)
//         {
//             return mid;
//         }
//         else if(n[i]<k)
//         {
//             start=mid+1;
//         }
//         else if(n[i]>k)
//         {
//             end=mid-1;
//         }
//     }
// }
// void main()
// {
// int key ,arr[10]={1,2,3,5,8,5,6,9,7,1};
// int *p;
// p=arr;
// scanf("%d",&key);
// binaryseach(p,key);
// for()
// printf("%d",)
// }
//star pattern
// void main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=3;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         if(i>1)
//         {
//         for (int j=1;j<i;j++)
//         printf("*");
//         }
//         printf("\n");
//     }

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=5;j>=i;j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

// }
//reversing the string using pointers 
// void rev(int* p,int n)
// {
//     for(int i=0;i<=n;i++)
//     {
//         printf("%c",*p);
//         p--;
//     }
// }
// void main()
// {   
//     char str[100];
//     int n,i;
//     int l=0;
//     //int* p=str[0];
//     printf("Enter the string:");
//     gets(str);
//     int* k=str[0];
//     for(i=0;str[i]!='\0';i++)
//     {
//         l=l+1;
//     }
//     int* p=str[l];
//    //printf("%d ",l);
//     //rev(p,l);
//     puts(str);
//     for(int* i=p;i!=k;i--)
//     {
//         printf("%s",str[i]);
//         p--;
//     }
// }

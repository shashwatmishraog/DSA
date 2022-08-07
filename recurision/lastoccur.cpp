#include<iostream>
using namespace std;
int lastoccur(int arr[],int n, int key)
{
    if (n==0)
    {
        return 0;
    }
    int subindex = lastoccur(arr+1,n-1,key);
    if(subindex == -1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }

     else
     {
       return subindex + 1;
     }
}
int main()
{
    int arr[] = {1,2,7,4,5,6,7,8,7,7,7,7};
    int n= sizeof(arr)/sizeof(int);
    int key = 7;
    cout <<lastoccur(arr,n,key);
    return 0;
}

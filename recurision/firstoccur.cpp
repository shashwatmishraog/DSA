#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int key)
{
    //base case
    if(n==0)
    {
        return -1;
    }
    //rec cse
    if(arr[0]==key)
    {
        return 0;
    }
    int subindex = firstoccur( arr +1 ,n-1, key );
    if(subindex  != -1)
    {
        return subindex+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n=sizeof (arr)/sizeof(int);
    int key =3;
    cout<<firstoccur(arr,n,key);
    return 0;
}
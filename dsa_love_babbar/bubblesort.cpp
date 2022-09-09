#include<iostream>
using namespace std;
 void bubblesort(int arr[],int n)
 {
for(int i=0;i<n;i++)
{
    for(int j=0;j<=n-1-i;j++)
    {
        if(arr[j]<=arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
 }
 int main()
 {
    int arr[]={1,2,8,2,6,4,3,8,8,2,1,5};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for (auto x:arr)
    {
        cout <<x<<",";
    }
    return 0;
 }
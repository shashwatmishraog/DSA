#include<iostream>
using namespace std;
bool isSorted(int arr[],int i,int n)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i]<arr[i+1] && isSorted(arr,i+1,n))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<< isSorted(arr,0,n)<<endl;
    return 0;

}
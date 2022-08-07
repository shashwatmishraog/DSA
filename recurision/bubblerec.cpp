#include<iostream>
using namespace std;
void bubblerec(int a[],int n)
{
    if(n==1)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }

    bubblerec(a,n-1);

}
int main()
{
    int arr[]={4,5,8,2,4,6,4};
    int n=sizeof(arr)/sizeof(int);
    bubblerec(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}
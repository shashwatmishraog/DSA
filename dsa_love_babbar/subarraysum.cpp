    #include<iostream>
    using namespace std;
    int subarraysum(int arr[], int n)
    { 
        int largestnum  = 0;
        for(int i = 0;i<n; i++)
        {
        for(int j = i; j<n ; j++)
        {

    
        int sum = 0;
        for(int k = i   ; k<=j;k++)
        {
            sum +=arr[k];   
        } 
        largestnum = max(largestnum,sum);
        }
        }   
    return 0;
    }
    int main()
    {
        int arr[]= {1,2,3,4,5};
        int n = sizeof(arr)/ sizeof(n);
        subarraysum(arr,n);
        cout<<subarraysum<<endl;
        return 0;

    }
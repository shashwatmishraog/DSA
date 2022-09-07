        #include<iostream>
        using namespace std;
        int linear_search(int arr[], int key , int n)
        {
            for(int i=0; i<n; i++){
                if(arr[i] == key){
                    return i;
                }
            } 
            return -1;
        }
        int main()
        {
                int arr[] = {1,2,3,5,4,6};
                int n = sizeof(arr)/sizeof(int);    
                int key;
                cin>>key;
                int index = linear_search(arr,key,n);
                if (index!=-1){
                    cout<<key<<"the index is found at"<<index<<endl;
                }
                else {
                    cout<<key<<"is not found"<<endl;

                }

                        
        }
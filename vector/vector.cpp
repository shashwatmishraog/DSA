#include<iostream>
#include<vector>
using namespace std;
// //using vector container 
// int main()
// {
//     // vector<int> arr = {1,2,3,4,5,8};
//     //fill constructor
//     vector <int> number(100,9)
//     //inserting a number 
//     // arr.push_back(16);
//     // //printing elements
//     // for(int i = 0 ;i<arr.size();i++)
//     // {
//     //     cout<<arr[i] << " " ;
//     // }
//     // cout<<endl;
//     // //sixe of the vector
//     // cout<<arr.size()<<endl;
//     // //capacity of the vector 
//     // cout <<arr.capacity()<<endl;

//     return 0;

// }

//2d vector using stl
// int main()
// {
//     vector<vector<int>> arr = {
//         {1,2,3},{4,5},{6,8},{9,1,2}
//     };
//     for(int  i =0; i<arr.size();i++)
//     {
//     for(int number : arr[i])
//     {
//         cout << number  ; 
//     }
//     cout<< endl;
//     }
//     return 0 ;
// }

// vector class 1 
class Vector
{
// data member 
int *arr;
int cs ;
int ms ;
public :
//vector constructor 
Vector (int maxsize =1)
{
cs =0;
ms =maxsize;
arr = new int[ms];
}
void push_back(int d)
{
    //two cases
    if(cs==ms)
    {
        //create a  new array of double size and delete the old array
        int *oldarr = arr;
        ms =2*ms;
        arr = new int[ms];
        //copying the elements
        for(int i = 0 ;i<cs;i++)
        {
            arr[i] = oldarr[i];
        }
        delete [] oldarr;
    }
    arr[cs]=d;
    cs++;
}
void pop_back()
{
    if(cs>0)
    {
        cs--;
    }
}
bool isempty (){
    return cs ==0;
}
int front (){
    return arr[0];
}
int back()
{
    return arr[cs-1];
}
int at(int i)
{
    return arr[i];
}
int sixe()
{
    return cs;
}
int maxsize()
{
    return ms;
}
}; 

int main()
{
    Vector v ;
}
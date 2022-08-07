#include<iostream>
using namespace std;


//NORMAL METHHOD

// int power(int n ,int a )
// {
//     //base case 
//     if(n==0)
//     {
//         return 1;
//     }
//     return a*power(n-1,a);
// }
// int main()
// {
//     int a,n;
//     cin>>a>>n;
//     cout<<power(n,a)<<endl;
//     return 0;
// }

// OPTIMISED METHOD
int powerop(int a , int n)
{
    if(n==0)
    {
        return 1;
    }
    int subproblem = powerop(a,n/2);
    subproblem *= subproblem;
    if(n&1)
    {
        return a*subproblem;
    }
    return subproblem;
}
int main()
{
    int a, n;
    cin>>a>>n;
    cout<<powerop(a,n)<<endl;
    return 0; 
    }
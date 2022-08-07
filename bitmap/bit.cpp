#include<iostream>
using namespace std;
//odd and even
// int main()
// {
//     int x ;
//     cin>>x ;
//     if(x&1)
//     {
//         cout<<"odd";
//     }
//     else{
//     cout<<"Even";
//     }
// }

//get ith bit
// int getithbit(int n,int i)
// {
//     int mask =(1<<i);
//     return(n&mask)>0?1:0;
// }
// int main()
// {
//     int n=5;
//     int i;
//     cin>>i;
//     cout<<getithbit(n,i);
//     return 0;
// }
// set ith bit
// void setithbit(int &n,int i)
// {
//     int mask =(1<<i);
//     n=(n|mask);

// }
// int main()
// {
//     int n=5;
//     int i;
//     cin>>i;
//     setithbit(n,i);
//     cout << n;
//     return 0;
// }

//clearing ith bit
void clearithbit(int &n,int i)
{
    int mask = ~(1<<i);
    n=n&mask;

}
int main()
{
    int n=13;
    int i;
    cin>>i;
    clearithbit(n,i);
    cout << n;
    return 0;
}

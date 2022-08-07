#include<iostream>
using namespace std;

int** c2darr(int rows,int columns)
{
    int **arr = new int*[rows];
    //now allocating the columns 
    for(int i=0;i<rows;i++)
    {
        arr[i] = new int[columns];
    }
    //givbing the values 
    int value = 0;
    for(int i = 0;i<rows;i++)
     {
        for(int j=0;j<columns;j++)
        {
            arr[i][j] = value;
            value++;
        }
     }
    return 0;
}

int main()
{
    int row,column;
    cin>>row>>column;
    int **arr =c2darr(row,column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
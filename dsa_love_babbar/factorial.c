#include<stdio.h>
int main()
{
    long int n ;
    printf("Enter the number\n");
    scanf("%ld",&n);
    long int sum=1;
    while(n != 0 )
    {
       sum *= n; 
       n--;
    }
    printf("%ld",sum);


}
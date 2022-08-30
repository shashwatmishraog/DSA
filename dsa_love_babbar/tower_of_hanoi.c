#include<stdio.h>
int c=0;
int tower(int n,char source,char helper,char destination)
{
    c++;
    if(n==0)
    {
        return 0;
    }
    tower(n-1,source,destination,helper);
    printf("Moved element %d from tower %c to tower %c\n",n,source,destination);
    tower(n-1,helper,destination,source);
    return c;
}
int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    tower(n,'a','b','c');
    printf("the no. of steps required was %d",tower(n,'a','b','c'));
    return 0;
}
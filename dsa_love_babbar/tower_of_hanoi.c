#include<stdio.h>
int c=0;
int tower(int n,char source,char helper,char destination)
{
    if(n==0)
    {
        return 0;
    }
    tower(n-1,source,destination,helper);
    printf("Moved element %d from tower %c to tower %c\n",n,source,destination);
    tower(n-1,helper,destination,source);
    c++;
    return 1;
}
int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    tower(n,'a','b','c');
    printf("the no. of steps required was %d",c);
    return 0;
}

// the optimal soln. of the problem is of (2^n)-1 steps so we have to take that in consideration.
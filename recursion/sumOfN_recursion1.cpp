#include <stdio.h>
//get the summation from 1 to n using recursion and comparing it w/loop

//implementation with loops
int Isum(int n)
{
    int s=0;
    int i;
    for (i=1; i<=n; i++)
        s=s+i;
    return s;
}

//recursive implementation
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main()
{
    int r;
    r=sum(5);
    printf("%d \n", r);
        
    int q;
    q=Isum(5);
    printf("%d \n", q);

    return 0;
}

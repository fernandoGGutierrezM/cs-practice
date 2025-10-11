#include <stdio.h>

//implementation for recursive fibonacci
int fib1(int n)
{
    if (n<=1)
        return n;

    return fib1(n-2)+fib1(n-1);

}


int F[10];

//implementation for memoization fibonacci
int fib2(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=fib2(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib2(n-1);
        return F[n-2]+F[n-1];
    }
}

int main()
{
    int i;
    for (i=0;i<10;i++)
        F[i]=-1;
    
    printf("%d \n", fib2(6));
    return 0;
}

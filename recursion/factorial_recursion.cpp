#include <stdio.h>

//factorial using recursion


int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int main()
{
    int r;
    r = fact(5);
    printf("% d \n", r);
    return 0;
}

#include <stdio.h>
#include <iostream>

//implementations for combination formula

//auxiliary implementation for factorial
int fact(int n)
{
    if (n==0)
        return 1;
    
    return fact(n-1)*n;
}

//common recursive combination formula 
int comb1(int n, int r)
{
    int num, den;
    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}

//combination formula using pascal's triangle
int NCR(int n, int r)
{
    if(n==r || r==0)
        return 1;

    return NCR(n-1, r-1)+NCR(n-1, r);
}

int main()
{
    std::cout<<"combination (conventional): ";
    printf("%d \n", comb1(4,2));
    std::cout<<"combination 2 (pascal's): ";
    printf("%d \n", NCR(4,2));
    return 0;
}
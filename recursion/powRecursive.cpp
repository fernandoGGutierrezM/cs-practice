#include <stdio.h>

//power calculated using recursion

int pow1(int m, int n)
{
    if (n==0)
        return 1;
    return pow1(m, n-1)*m;
}

int pow2(int m, int n)
{
    if (n==0)
        return 1;
    if(n%2==0)
        return pow2(m*m, n/2);
    return m*pow2(m*m, (n-1)/2);
}

int main()
{
    int r=pow1(4,2);
    int q=pow2(4,2); 
    printf("%d \n", r);
    printf("%d \n", q);
    return 0;

}

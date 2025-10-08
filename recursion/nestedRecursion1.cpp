#include <stdio.h>

//nested recursion

int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11)); //NESTED CALL
}

int main()
{
    int r;
    r=fun(95);

    printf("%d \n", r);
    
    return 0;

}

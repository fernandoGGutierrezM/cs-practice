#include <stdio.h>
#include <iostream>

//this is done in order to keep a variable "out" from the function
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        //printf("%d",x);
        std::cout << n-1+x;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r=fun(5);
    printf("quita \n");
    printf("%d", r);
    printf("\n");
    return 0;
}

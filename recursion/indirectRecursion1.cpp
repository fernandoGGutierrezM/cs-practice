#include <stdio.h>

//we have to declare it to call it at fun A
//otherwise we won't be able to call it
void funB(int n);

void funA(int n)
{
    if(n>0)
    {
        printf("%d", n);
        printf("\n");
        funB(n-1);
    }
}

void funB(int n)
{
    if(n>1)
    {
        printf("%d", n);
        printf("\n");
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}

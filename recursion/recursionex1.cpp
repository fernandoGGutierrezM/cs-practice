
#include <stdio.h>
//simple recursion example
void fun(int n)
{
    if(n>0)
    {
        //changing the order of printing will reverse the output
        //printf("%d ", n);

        fun(n-1);
        printf("%d ", n);
    }
}

int main(){
    int x=3;

    fun(x);
    printf("\n");
    return 0;

}

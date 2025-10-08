#include <stdio.h>

//tree recursion (it's trree recursion when there's more
//than one recursive calls at the function

void fun(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }

}


int main(){
    fun(3); 
    printf("\n");
    return 0;
}

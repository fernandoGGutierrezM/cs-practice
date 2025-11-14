#include <iostream>
#include <stdlib.h>


int main()
{
    int *p,*q;

    p=(int *)malloc(5*sizeof(int));
    
    p[0]=3;
    p[1]=6;
    p[2]=5;
    p[3]=7;
    p[4]=8;

    q=(int *)malloc(10*sizeof(int));
    
    for (int i=0;i<5;i++)
        q[i]=p[i];

    free(p);
    p=q;
    q=NULL;

    for(int i=0;i<5;i++)
        std::cout<<p[i]<<std::endl;

    return 0;
}

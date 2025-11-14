#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A[5]={1,2,4,5,6};
    int *p;
    int i;

    //std::cout<<sizeof(A);
    
    //store values in heap using pointers
    p=(int *)malloc(5*sizeof(int));

    p[0]=3;
    p[1]=4;
    p[2]=6;
    p[3]=7;
    p[4]=11;
    
    //access the array common and stored in stack
    for (i=0;i<5;i++)
        printf("%d",A[i]);

    //access the array values stored in heap
    printf("\n");
    for (i=0;i<5;i++)
        printf("%d",p[i]);
    std::cout<<std::endl;
    return 0;

}

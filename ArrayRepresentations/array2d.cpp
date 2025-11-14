#include <iostream>
#include <stdlib.h>

int main()
{
    //this is created at stack
    int A[2][4]={{1,2,3,4},{9,8,6,5}};

    //integers for the loops
    int i,j;
    
    std::cout<<"normal form"<<std::endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            std::cout<<A[i][j]<<std::endl;
        }
    }
   
    //this is created in stack
    int *B[2];
    //this ones are in heap
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    
    //THIS WILL WORK FOR THE NEXT 2 OPTIONS
    //VALUES ARE NOT INITIALIZED SO RIGHT NOW IT'LL PRINT GARBAGE VALS
    std::cout<<"stack var and arr heap"<<std::endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            std::cout<<B[i][j]<<std::endl;
        }
    }    
     
    //this is all in stack
    int **C;
    C=(int **)malloc(2*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));


    return 0;

}

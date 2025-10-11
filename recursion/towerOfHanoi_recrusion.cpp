#include <iostream>

//implementation of tower of hanoi using recursion

void towerOfHanoi(int n, char source, char destination, char aux)
{
    if (n>0)
    {
        towerOfHanoi(n-1,source, aux, destination);
        std::cout<<source<<", "<<destination<<std::endl;
        towerOfHanoi(n-1,aux, destination, source);
    }
    
}


int main()
{
    
   towerOfHanoi(3, 'a', 'c','b');
    return 0;
}

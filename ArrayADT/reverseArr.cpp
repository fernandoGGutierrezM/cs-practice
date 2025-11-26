#include <iostream>



void reverse(int *array, int size)
{
    int copyarr[size];
    int k=0;

    for(int i=size-1;i>-1;i--)
    {
        copyarr[k]=array[i];
        k++;
    }

    for(int i=0;i<size;i++)
    {
        array[i]=copyarr[i];
    }
}

void display(int *array, int size)
{
    
    for(int i=0;i<size;i++)
    {
        std::cout<<array[i];
    }

}

int main(){
    int myArr[5]={1,2,3,4,5};
    int size=(sizeof(myArr)/sizeof(myArr[0]));
    std::cout<< "length: "<< size <<std::endl;
    reverse(myArr, size);
    display(myArr,size);



}
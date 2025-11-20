#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;

//this creates the array as an ADT 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
     
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    void append(struct Array *arr, int x)
    {
        if(arr->length<arr->size)
            arr->A[arr->length++]=x;
    }
   
    void insert(struct Array *arr, int index, int x)
    {
        int i;
        if(index>=0 && index <=arr->length)
        {
            for(i=arr->length;i>index;i--)
                arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    } 
    
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};


int main() {
 
 
    Array arr(10);
    arr.create();
    arr.display();
    
    cout<<"===APPEND FUNCTION==="<<endl;    
    arr.append(&arr,20);
    arr.display();
    
    cout << "===INSERT FUNCTION==="<<endl;
    arr.insert(&arr, 1, 32);
    arr.display(); 
 
    return 0;
}

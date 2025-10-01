#include <iostream>

using namespace std;

//a here is a ptr to A
//you can do: void fun(int *A, int n)
void fun(int A[ ])
{
	cout << sizeof(A)/sizeof(int)<<endl;
}

void fun2(int *A, int n)
{
	A[0]=15;
}

//this is  afunction that returns a ptr
//array is created inside this function and stored in heap, but still main is able to access the array because it is trhough a pointer
int * fun3(int size)
{
	int *p;
	p=new int[size];

	for(int i=0;i<size;i++)
	p[i]=i+1;

	return p;
}

int main()
{
	int A[ ]={1,3,4,5,6};
	int n=5;
	fun(A);

	for (int x:A)
	cout<<x<<" ";
	cout << endl;
	
	fun2(A, 5);

	for (int i=0;i<5;i++)
		cout<<(A[i]);

	cout<<endl;

	cout << "pointer a huevo"<<endl;
	int *ptr, sz=5;
	ptr=fun3(sz);

	
	for (int i=0;i<sz;i++)
	cout<<ptr[i]<<endl;


	return 0;
}

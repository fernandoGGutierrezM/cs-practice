
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a=10;
	int *p;
	
	p=&a;

	cout<<a<<endl;
	//*p means it will dereference p
	printf("using pointer %d",*p);
	cout<<endl;
	printf("using pointer %d",p);
	cout<<endl;

	//ptr to an array
	int A[5]={2,3,4,5,6};
	int *ptr;
	ptr=A;

	cout<<"ptr to array"<<endl;	
	for(int i=0;i<5;i++)
	cout<<ptr[i]<<endl;


	//ptr to allocate heap
	//this is in C
	//remember to include stdlib.h
	int *p1;
	p1=(int *)malloc(3*sizeof(int));
	
	p1[0]=10; p1[1]=15; p1[2]=14;
	cout << "ptr to allocate heap in C" << endl;
	for(int i=0;i<3;i++)
	cout << p1[i]<< endl;
	
	//this is for cpp (can use both)
	int *p2;
	p2=new int[3];
	p2[0]=10; p2[1]=15; p2[2]=14;
	
	cout<< "ptr to allocate in cpp" << endl;
	for(int i=0;i<3;i++)
	cout << p2[i]<< endl;

	//to dealocate
	delete [ ] p1; //c
	free(p2); //cpp

	return 0;


}


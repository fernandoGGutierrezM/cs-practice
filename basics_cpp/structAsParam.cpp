#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
	int len;
	int height;
};

//pass by value changes to r here will not have effect anywhere else in the program (value)
void fun(struct Rectangle r)
{
	cout <<"len: "<<r.len<<" height: "<<r.height<<endl;
}

//pass struct by address to a function
void fun2(struct Rectangle *p)
{
	p->len=20;	
	cout <<"len: "<<p->len<<" height: "<<p->height<<endl;
}

//create a function for store it in heap 
struct Rectangle *fun3()
{
	struct Rectangle *p;
	p = new Rectangle;

	p->len=26;
	p->height=12;
	return p;
}

int main()
{
	struct Rectangle r={10,5};

	printf("length %d \n height %d\n", r.len, r.height);

	cout<<"by value: "<<endl;
	fun(r);

	//another example for pass by reference
	cout<<"by reference: "<<endl;
	struct Rectangle r2={9,8};
	fun2(&r2);

	//rectangle in heap, return an address of struct
	cout<<"return address given a ptr: "<<endl;
	struct Rectangle *ptr=fun3();
	cout<<"len: "<<ptr->len<<" height: "<<ptr->len<<endl;

	return 0;
}

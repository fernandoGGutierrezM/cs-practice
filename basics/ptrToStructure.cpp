#include <iostream>
using namespace std;

struct Rectangle
{
	int len;
	int height;
};

int main()
{
	struct Rectangle r={10,5};
	//in cpp you can just write Rectanlge, in C you must write struct
	
	cout<<r.len<<endl;
	cout<<r.height<<endl;

	Rectangle *p=&r;
	cout<<p->len<<endl; //remember that for pointer var, USE ARROW
	cout<<p->height<<endl;

	//create object in heap
	//you need a ptr
	Rectangle *ptr;
	ptr = new Rectangle;

	ptr->len=15;
	ptr->height=5;

	cout<<ptr->len<<endl; 
	cout<<ptr->height<<endl;



	return 0;
}

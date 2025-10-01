#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int height;
	char x;
};
//you can do this to declare:
//}r1,r2;



//This is another way to declare it
//struct Recantle r1;

int main(){
	//declaration of a struct
	struct Rectangle r1{10,5};
		
	//printf("%d", sizeof(r1));	


	cout<<r1.length<<endl;
	cout<<r1.height<<endl;

	return 0;

}



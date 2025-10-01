#include <iostream>
#include <stdio.h>

using namespace std;


class Rectangle
{
	public:
	int len;
	int h;

	void init()
	{
		len=10;
		h = 5;
	}

	int area()
	{
		return len*h;
	}
};

int main()
{
	Rectangle r1;
	r1.init();
	cout<<r1.area()<<endl;
}

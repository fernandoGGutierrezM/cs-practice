#include <iostream>

using namespace std;

class Rectangle
{
private:
	int len;
	int height;
public:
	Rectangle()
	{
		len=0;
		height=0;
	}
	Rectangle(int l, int b)
	{
		len=l;
		height=b;
	}
	int area()
	{
		return len*height;
	}
	int perimeter()
	{
		return 2*(len*height);
	}
	void setLength(int l)
	{
		len=l;
	}
	void setHeight(int h)
	{
		height=h;
	}
	int getLen()
	{
		return len;
	}
	int getHeight()
	{
		return height;
	}
	~Rectangle()
	{
		cout<<"destructor";
	}
};

int main(){
	Rectangle r(10,8);

	cout<<"area: "<<r.area()<<endl;
	cout<<"perimeter: "<<r.perimeter()<<endl;
	return 0;

}

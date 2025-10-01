#include <iostream>
using namespace std;

//you first complete the normal class and then convert to template
//with templates you can use any class w/different types of variable

template<class T>
class arithmetic
{
private:
	T a;
	T b;
public:
	arithmetic(T a, T b);
	T add();
	T sub();
};
	
	template<class T>
	arithmetic<T>::arithmetic(T a, T b)
	{
		this->a=a; //this is a ptr to curent object
		this->b=b;
	}
	
	template<class T>
	T arithmetic<T>::add()
	{
		T c;
		c=a+b;
		return c;
	}

	template<class T>
	T arithmetic<T>::sub()
	{
		T c;
		c=a-b;
		return c;
	}


int main()
{
	arithmetic<float> ar(10.99, 5.35);

	cout<<"add: "<<ar.add()<<endl;
	cout<<"sub: "<<ar.sub()<<endl;

	return 0;
}

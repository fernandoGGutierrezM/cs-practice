
#include <iostream>

using namespace std;

//==== by value (if we modify the variables here it won't change out
int add(int a, int b)
{
	int c;
	c=a+b;

	return c;
}

//===by address 
int swap(int *x, int*y)
{
//this pointers will access n1 and n2 
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}

//===by reference
int swap2(int &x, int&y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
}


int main()
{
	//pass by value (parameter will not change as var change out
	int num1=10, num2=15, sum;
	sum=add(num1,num2);
	cout<<"sum is "<<sum<<endl;
	//we can't access the vars outside the function
	
	//by address
	int n1=10, n2=20;
	swap(&n1, &n2);//you are indirectly passing the n1, and n2 addresses to  the swap function
	cout<<"1st num: "<<num1<<endl;
	cout<<"2nd num: "<<num2<<endl;

	//by reference
	int nn1=10, nn2=20;
	//you don't need to reference here, it's already referenced at the function
	swap2(nn1, nn2);
	cout<<"1st num: "<<nn1<<endl;
	cout<<"2nd num: "<<nn2<<endl;

	

	return 0;
}



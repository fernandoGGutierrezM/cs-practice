#include <iostream>

using namespace std;

int main(){
    
	int A[5];
	A[0]=12;
	A[1]=15;
	A[2]=25;

	int B[10]={2,4};

	cout<<sizeof(A)<<endl;
	cout << A[1]<<endl;
	
	cout<<"B"<<endl;

	cout<<B[2]<<endl;
	
	//print the array values as x, just at he for x in B	
	for (int x:B)
	{
	    cout<<x<<endl;	
	}

	return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ************ Miscellaneous Operators in C++************
	int a=5;
	float b=9.25;
	double c=89;
	long double d=96;
	char e='f';

	cout<<"WELCOME to the Programming World\n";
	
	//      sizeof()  Operator

	cout<<"The size of integer variable in my machine is "<<sizeof(a)<<endl;
	cout<<"The size of float variable in my machine is "<<sizeof(b)<<endl;
	cout<<"The size of double variable in my machine is "<<sizeof(c)<<endl;
	cout<<"The size of long double variable in my machine is "<<sizeof(d)<<endl;  
	cout<<"The size of character variable in my machine is "<<sizeof(e)<<endl;


	//     ERROR HERE
    
    //**********Condition ? x:y***************

	int g;
	cout<<"Enter the value for 'g'\n";
	cin>>g;
	cout<<"The result of the following condition :"<<endl;
	char var = ( g%2 == 0 ) ? "g is even" : "g is odd"; //////<<<<<<<<<<<<<<  ERROR HERE
	cout<<"The entered value of "<<var;

	
	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"WELCOME TO Arithmetic Operator Program\n";
	cout<<"Enter the value for 'a':\n";
	cin>>a;
	cout<<"Enter the value for 'b':\n";
	cin>>b;

	//Arithmetic Binary Operations
	cout<<"Addition of variables is : "<<a+b;
	cout<<"\nSubtraction of variables is : "<<a-b;
	cout<<"\nMultiplication of variables is : "<<a*b;
	cout<<"\nDivision of variables is : "<<a/b;
	cout<<"\nModular Division of variables is : "<<a%b;

	//Arithmetic Unary Operations
	
	cout<<"\nPost-increment of variables 'a' is : "<<a++;
	cout<<"\nPre-increment of variable 'a' is : "<<++a;
	cout<<"\nPost-decrement of variables 'a' is : "<<a--;
	cout<<"\nPre-decrement of variable 'a' is : "<<--a;
	

	return 0;
	


}
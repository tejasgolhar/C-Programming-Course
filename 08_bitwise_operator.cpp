
#include<iostream>

using namespace std;

int main()
{
	// Bitwise Operator Program
	
	int a=5,b=9;
	
	cout<<"The result of Bitwise AND (&) is "<<(a&b)<<endl;

	/* ***********Analysis for AND Case***************
	
	a = (5)D = (0101)2
	b = (9)D = (1001)2

	Bitwise AND on both Binary Values :

	                a = 0 1 0 1
	                b = 1 0 0 1
                   _____________   

                (a&b) = 0 0 0 1 = (0001)2 = (1)D = 1

                Hence, ( a & b ) = 1

	*/




	cout<<"The result of Bitwise OR (|) is "<<(a|b)<<endl;
	cout<<"The result of Bitwise NOT (~a) is "<<~a<<endl;
	cout<<"The result of Bitwise NOT (~b) is "<<(~b)<<endl;
	cout<<"The result of Bitwise XOR (^) is "<<(a^b)<<endl;
	cout<<"The result of Bitwise Left Shift by 2 digits (<<2) is "<<(a<<2)<<endl;
	cout<<"The result of Bitwise Right Shift by 2 digits (>>2) is "<<(a>>2)<<endl;
	return 0;
}
#include<iostream>

using namespace std;

int main()
{
	//  Assignment Operator Program
	int b=14,a;

	cout<<"The value of 'a = b' is "<<(a=b)<<endl;
	cout<<"The value of 'a += b' is "<<(a+=b)<<endl;
	cout<<"The value of 'a -= b' is "<<(a-=b)<<endl;
	cout<<"The value of 'a *= b' is "<<(a*=b)<<endl;
	cout<<"The value of 'a /= b' is "<<(a/=b)<<endl;


	return 0;
}
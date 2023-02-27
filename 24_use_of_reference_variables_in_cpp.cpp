#include<iostream>
using namespace std;

void swapPointerVar(int &a, int &b)  // here the parentheses contains the formal parameters also called the function arguements
// this will store the value of 'x' in the address location of newly generated variable 'a'
{
    int temp=a;  // the value of 'a' since we have stored a value (x) at its address location
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cout<<"Program to SWAP the values of the two variables"<<endl;
    cin>>x>>y;
    cout<<"The value of First variable is "<<x<<" & the value of Second variable is "<<y<<endl; 
    
    cout<<"\nAfter SWAP algorithm :\n";
    swapPointerVar(x,y);     //  HERE, x and y are actual parameters / arguements of the function here
    // Values of x and y are passed on to the function
    cout<<"The value of First variable is "<<x<<" & the value of Second variable is "<<y<<endl; 
    return 0;
}
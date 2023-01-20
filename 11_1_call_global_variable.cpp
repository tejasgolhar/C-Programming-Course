#include<iostream>
using namespace std;

int a=56;

int main(){


    //                 ******Build in Data types********
   
   /*
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;

    */



    //            *****   Call the value stored in the global variable    *****
    
    int a=45;   //regenerated the variable with same name

    //to print the value in a when called normally
    cout<<"Enter the value of varible 'a':\n"<<a<<endl; 

    //to access the value of variable stored globally
    cout<<"Enter the value of varible 'a' stored globally:\n"<<::a<<endl; 


    return 0;
}
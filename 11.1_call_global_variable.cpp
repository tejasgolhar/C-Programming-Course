#include<iostream>
using namespace std;

int a=56;

int main(){
    
    //*****Call the value stored in the global variable*****
    
    int a=45;   //regenerated the variable with same name

    //to print the value in a when called normally
    cout<<"Enter the value of varible 'a':\n"<<a<<endl;

    //to access the value of variable stored globally
    cout<<"Enter the value of varible 'a' stored globally:\n"<<::a<<endl;


    return 0;
}
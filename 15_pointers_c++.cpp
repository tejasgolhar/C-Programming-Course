#include<iostream>
using namespace std;

int main(){
    
    
    //*********   Address of a variable [ ADDRESS OF OPERATOR (&) ]  *******

    //  '&n' denotes the address of value stored in variable 'n' in the main memory
    
    int a;
    cout<<"Enter the value for variable 'a' below - "<<endl;
    cin>>a;
    cout<<"\nThe address of 'a' in main memory is \n"<<&a<<endl;
    
    //NOTE:     An address is alloted whenever the programs is run




    int * b = &a;       //*********  GENERATION OF POINTER VARIABLE **********
    cout<<"The value of 'b' i.e., Address of 'a' is \n"<<b<<endl;

    //    Variable 'b' stores the address value of 'a' i.e., '&a'

     cout<<"The value stored at 'Memory address - b' i.e., value of 'a' you entered is \n"<<*b<<endl;

    //  '*b' denotes the actual value stored at the memory location encoded by variable 'b' which is nothing but '&a'     

    //  The variable that can store the address of a value stored in pre-specified variable is called ****Pointer Variable*****
    
    return 0;
}
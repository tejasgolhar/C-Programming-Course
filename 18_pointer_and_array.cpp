#include<iostream>
using namespace std;

int main(){
    
    //                   ******   POINTERS AND ARRAYS    ******

    // Formula for Pointer Arithmetic is :
    //           Address(new) = Address(base) + ( size_of_datatype * Index value )


    int n;
    cout<<"Enter the size of the array as 4 or more :"<<endl;
    cin>>n;

    int marks[n];
    cout<<"Enter the elements for the array of marks:\n";

    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }

    // Create a pointer variable which has the ability to  store the address of the assigned variable

    int* p = marks; 
    
    
    //    ********  DEREFERENCING MEMORY LOCATION OF ELEMENT STORED IN ARRAY   **********


    // Here, we don't write -----       int * p = &marks;
    // Because, in arrays, the array name is itself the address value for the variable appointed

    
    //here, 'p' will store the address value of the first index location

    cout<<"The value of 1st index location is : "<< *p<<endl;
    cout<<"The value of 2nd index location is : "<< *(p+1)<<endl;
    cout<<"The value of 3rd index location is : "<< *(p+2)<<endl;
    cout<<"The value of 4th index location is : "<< *(p+3)<<endl;

    // lets get the address of the memory location in array using pointer concept

    cout<<"\nThe address of 1st index location is : "<<p<<endl;
    cout<<"The address of 2nd index location is : "<<p+1<<endl;
    cout<<"The address of 3rd index location is : "<<p+2<<endl;
    cout<<"The address of 4th index location is : "<<p+3<<endl;

    return 0;
}           
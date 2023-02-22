#include<iostream>
using namespace std;

// **  Program to understand the significance of ** Call By Reference **
//     ( In prior module, we already have discussed about ** Call By Value ** )

void swapPointer(int*a, int*b)  // *******  DEFERENCING  **********
//this will generate pointer varaiables which have the capacity to store the addresses of the variables
//they will store the addresses of x and y but not the values
{
    int temp= *a; // this will equate the value of address location to the variable
    *a = *b;
    *b = temp; 
}

int main(){
    int x,y;
    cout<<"Program to SWAP the values of the two variables"<<endl;
    cin>>x>>y;
    cout<<"The value of First variable is "<<x<<" & the value of Second variable is "<<y<<endl; 
    
    cout<<"\nAfter SWAP algorithm :\n";

    swapPointer(&x,&y);    //  ********  REFERENCING  *********
    // this will pass not the values but the addesses of the values of x and y in the memory

    cout<<"The value of First variable is "<<x<<" & the value of Second variable is "<<y<<endl; 
    return 0;
}



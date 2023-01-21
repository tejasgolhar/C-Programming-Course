#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // The value of a variable can change when is redefined

    cout<<"Execution of CONST variable program\n"<<endl;
    int a;
    cout<<"Enter the value for 'a':"<<endl;
    cin>>a;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"\nRe-enter the value for 'a':"<<endl;
    cin>>a;
    cout<<"The changed value of a is : "<<a<<endl;


    //   ****  CONSTANTS IN C++   ****
   
   /*
    const int b=89;
    cout<<"\nThe value of b is : "<<b<<endl;
    // lets redefine value of b and see the result

    //uncomment the below line to see the effect

    // b=65;
    cout<<"\nThe value of b is "<<b<<endl;

    */


    //   *** MANIPULATORS IN C++ ***

    /* The manipulators are the special type of keywords that are used to format the data view as per user's ease
             They are as given -
                   1. endl;   --- End of the line and start the new line

                   2. setw(); --- Used to set the width of the user input data in terms of number of spaces and the 
                                    user input value gets right justified
                                NOTE : The setw operator comes under the library named "iomanip"
    */

    cout<<"\n\nExecution of Manipulators in C++ program\n"<<endl;
   int c;
   cout<<"Enter the value for 'c' having no. of digits not more than 3 :\n";
   cin>>c;

    //use of endl to start the new line

    cout<<"\nThe value of 'c' is : "<<c<<endl;

    //use of setw to "Right Justify the user input data"

    cout<<"\nThe value of 'c' is : "<<setw(4)<<c<<endl;

    
    return 0;
}
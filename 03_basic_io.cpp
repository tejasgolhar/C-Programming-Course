#include<iostream>

using namespace std;

int main()
{
   int number1, number2;

    cout<<"Enter the value of number1:\n";  /*  '<<' is called the Insertion operator  */
    
     /* Print the string given by the user as it is*/

    cin>>number1; /*  '>>' this is called Extraction Operator*/
      
      /* Scan the value given by user and store it in variable named number1*/
    
    cout<<"Enter the value of number2:\n";
    cin>>number2;

    cout<<"The Sum is "<<number1+number2;


    return 0;
}
#include<iostream>
#include<unistd.h>
using namespace std;


//                            ******   RECURSIVE FUNCTIONS   ******

//Recursion is the technique of making a function call itself.
//This technique provides a way to break complicated problems down into simple problems which are easier to solve.


// "FACTORIAL" OF A NUMBER USING RECUSIVE FUNCTIONS

int factorial(int a)
{
    if(a<=1){
        return 1;
    }
    return a * factorial(a-1);

/* Lets trace the function for an arbitrary input a=4;

      4 * factorial (4-1 = 3)  
                   ___but, the value of fact(4-1) is not known and the function is recalled here;
      4 * 3 * factorial (3-1 = 2) 
                   ___but, the value of fact(3-1 = 2) is not known and the function is recalled here;
      4 * 3 * 2 * factorial (2-1 = 1)
                   ___but a = 1, the "if" condition will become true and the whole function will return the value "1"
    
     Hence, for a=4; answer = 4*3*2*1 = 24 */

}


// "FIBONACCI SERIES" USING RECURSIVE FUNCTIONS
//  The Fibonacci sequence follows : 1,1,2,3,5,8,13,21,34,......

int fibon(int b){
    if(b<=1){
        return 1;
    }
    return fibon(b-1) + fibon(b-2);

/*    Lets trace the function for an arbitrary input b=4;

    Value of function:  fibon(4-1 = 3) + fibon (4-2 = 2)  
        but, the value of fibon(4-1 = 3) and the value of fibon(4-2 = 2) is not known and the function is recalled here;

    for fibon(4-1 = 3);                  |   for fibon (4-2 = 2)
      = fibon(2) + fibon(1)              |       = fibon(1) + fibon(0)
      = fibon(2) + 1                     |       =  1 + 1 
      = [ fibon(1) + fibon(0) ] + 1      |       =  2
      = 1 + 1 + 1
      = 3

    Value of function:  fibon(4-1 = 3) + fibon (4-2 = 2) = 3 + 2 = 5 

*/
}

int main(){
    int n,m;

    // "FACTORIAL" OF A NUMBER

    cout<<"Enter an integer number : "<<endl;
    cin>>n;
    cout<<"The factorial of the number "<<n<<" is : "<<factorial(n)<<"."<<endl;

    sleep(2.5);  // Holds further program execution with arguement value in seconds

    // "FIBONACCI SERIES"
    
    cout<<"\nEnter an integer which defines the index number of the value in Fibonacci Series:"<<endl;
    cin>>m;
    cout<<"The value present at index location "<<m<<" in the fibonacci series is "<<fibon(m)<<" ."<<endl;
    return 0;
}
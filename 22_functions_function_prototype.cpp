#include<iostream>
using namespace std;

/*user-defined function
lets create a new function named sum*/

int sum(int a,int b)

//int sum(int a,b)  ----- NOT Acceptable
//int sum(int, int)  ------ Acceptable

//NOTE : here, a and b are FORMAL PARAMETERS (need not to be always specified )

//the parentheses content represents the arguements of the function
{
    int c =a+b;
    return c;
    //this return value goes to the place where the function was called
}


/*pre-defined function
the below is the main function from which the program execution initiates*/
int main(){

    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;

    cout<<"The sum is "<<sum(num1,num2); 
    //here, num1 and num2 are ACTUAL PARAMETERS that are gonna be passed to the function

    // here, the sum function is called and the valued of num1 and num2 are
    //       passed on to the sum function

    return 0;
    //this tells the operating system that the program has been executed successfully
}

/*  NOTE: 

a) We can keep the name of formal and actual parameters same,
    it wont result ant error, but to prevent confusion it is worthier to keep the name to be different 
    from each other

b) A function need not always have to return value 
  e.g,

       void g(); *****OR***** void g(void);     ----  a function defined prior the main function
       
       void g()
       {
        cout<<"This confirms that, it's not necessary that a function should always have a return value "
       }
*/
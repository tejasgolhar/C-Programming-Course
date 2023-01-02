#include <iostream>

using namespace std;

int a = 9; // Globally Declared Variable

int main()
{
    /*Variables decalred below/under the function, hence are LOCAL VARIABLES
    Here, we are declaring variable by following the syntax as follows :
     syntax : data_type variable_name = variable value*/

    /* int a = 4;
       int b = 5; */

    int a = 4, b = 5; // Integer value
    /*Here, rather than using multiple lines for declaring the individual variables, we have
    decalred them into a single line itself*/

    /*Since, variable 'a' is already decalred globally, precedence will be given
    to the locally updated value */

    a = 96;
    // updating the variable value locally

    float pi = 3.142; // float value

    char c = 'm'; // character value
    // NOTE : the variable should be equated with a single character value only

    cout << " Hey Dear !\nThe value of variable a is " << a << " .\nThe value of b is " << b << ".";

    cout << "\nThe value of pi is " << pi << ".";

    cout << "\nThe value of c is " << c << ".";

    return 0;
}
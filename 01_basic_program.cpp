#include<iostream>

/*  Header file Section : The term iostream used here is known as header file
    Here, the meaning of header file is that user is requesting the program compiler to keep your 
    commands coming under the header file named "iostream" to be used in the below program  
    
    NOTE :  The blank lines are ignored by the compiler.. */
using namespace std;
/*Namespace standard is an important term that will be discussed soon*/


int main()
/* From the above,
    "int" : stands for integer value which is the return type value obtaining as a result of
               the main function execution will be of integer type
    "main" : It is the function from which the program starts at  first,
                The main function is found which behaves like the owner of the Hotel 
                who transfer the requirement of customer (Here, user program) and  passes on 
                the task to his employees (Here, subfuctions called under the main function) 
    NOTE : The proper syntax of writing a function is :  main(){..--user program--..}
              */
{
     /*Instructions are written here in the curly braces 
     For ease of handling of the program, each instruction is startes from the new line and is ended there by using semicolon(;)*/

    cout<<" Hello Teja Don ! Kasa ahes tu ? ";
    /*  cout: It is the basic output instruction in cpp which will discussed in detail soon...
        String : The set of user data enclosed within double inverted commas is termed as a String*/

    return 0;
    /* this instruction tells that give return value of the function is zero that the program is successfully terminated */

}
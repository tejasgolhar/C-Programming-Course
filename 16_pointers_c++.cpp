#include<iostream>
using namespace std;

int main(){
    
    
    //   *********   Address of a variable [ ADDRESS OF OPERATOR (&) ]  *******

    //  '&n' denotes the address of value stored in variable 'n' in the main memory
    //NOTE:     An address is alloted whenever the programs is run



    //  **** POINTER GENERATION ****


    string food;  // A food variable of type string
    cout<<"Enter the food you want to store in godown:\n"<<food;
    cin>>food;
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << "\nOutput the value of food\n:"<< food ;

    // Output the memory address of food
    //  cout << "\nOutput the memory address of food\n"<< &food ;






    //     *****  REFERENCING   ********

    // Output the memory address of food with the pointer 
    cout << "\nOutput the memory address of food\n:"<< ptr ;
    




    //     ****  DEREFERENCING   ********

    // Output the value of food with the pointer 
    cout << "\nOutput the value of food \n:"<< *ptr;




    //    ****** UPDATING THE VALUE OF THE POINTER   *******  

    // Change the value of the pointer
    cout<<"\nUpdate the godown storage with another food:\n ";
    cin>>*ptr;

    // Output the new value of the pointer
    cout << "\nOutput the new value of the pointer\n"<< *ptr;

    // Output the new value of the food variable
    cout << "\nOutput the new value of the food variable\n"<< food;

    // Output the memory address of the new food with the pointer 
    //  Location remains the same even if the pointer value is updated
    
    cout << "\nOutput the memory address of the updated food\n:"<< ptr ;

    
    return 0;
}
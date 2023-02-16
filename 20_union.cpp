#include<iostream>
using namespace std;

//   ***********     UNIONS IN C++   **************

//        Memory is shared among all the given datatypes

//  Only one among the datatype is used at once and hence this feature allows
//         better memory management as compared with the structures 


union book{

    int isbn;
    char code;
    float price;

    //among the above datatypes, the memory space of size of datatype with highest size is allocated 
    //this allocated memory space is now used and reused to overwrite the final value within the memory
    // this means memory is being shared 
};
   

int main(){
    

    union book book1;
    book1.isbn = 12364;
    book1.price=190.55;
    cout<<"The book isbn value is "<<book1.isbn<<endl;
    cout<<"The book price is fixed as "<<book1.price<<endl;

     //the prior value is overwritten with the new value and hence a garbege value is 
    //  obtained as a result of the run for the previous command

    return 0;
}
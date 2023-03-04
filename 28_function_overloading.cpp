#include<iostream>
using namespace std;

   //                   ****     Function Overloading    ******

//   With function overloading, multiple functions can have the same name with different parameters

//  AIM :  TO FIND SURFACE AREA OF VARIOUS GEOMETRICAL OBJECTS USING FUNCTION OVERLOADING

// SURFACE AREA OF A CUBE
float sur_area(float s)
{
    return (6*s);
}

//SURFACE AREA OF A CYLINDER
float sur_area(float r, float h)
{
    return (( 3.142 * 2 * r * r ) + (r * h)   );
}

//SURFACE AREA OF A PARALELLOPIPED
float sur_area(float l, float b, float h)
{
    return (2*(l*b + b*h + l*h));
}

/*
   In all the above cases, we used the "same function" multiple times which is called "Function Overloading"
*/


int main(){
    
    cout<<"Enter details for the geometrical shapes whose total surface area to be found:"<<endl;

    cout<<"The Total Surface Area of Cube having side 3.5 is "<<sur_area(3.5)<<" ."<<endl;
   
    cout<<"The Total Surface Area of Cylinder having radius 5.6 and height 1.4 is "<<sur_area(5.6,1.4)<<" ."<<endl;
   
    cout<<"The Total Surface Area of Paralleloiped having length of 4.8, breadth of 3.2 and height of 1.2 is "<<sur_area(4.8,3.2,1.2)<<" ."<<endl;

    return 0;
}

/* Note:  The datatype of function mentioned during function declaration matters more since its the overall output in the format 
        which the function is going to evaluate while the datatype of passing parameters are not that important
*/
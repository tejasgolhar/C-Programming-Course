#include<iostream>
using namespace std;

int main(){

    /* ARRAY : The derived datatype that is used to store data of
        similar data-type which are allocated contiguous memory loacations in the memory
        
    */ 

   //  ******   DECLARATION OF ARRAYS  *******


   //                 METHOD 1 : Array in a single line

    int  marks[4]= {74, 56, 58, 89};
    
    // In the above array, the index location of the storage container 
    //starts from 0 and not 1

    // Lets print the value present at each index of the array initialized

    cout<<"The elements present in the array via Method 1 declaration are:\n";
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // cout<<marks[4]<<endl; // this will give a garbage value

  
  //              METHOD 2 : Array declaration and then value assignment
  //                         to each index location

    int dspMarks[4];
    
    // now, value assigned to each index location

    dspMarks[0] = 51;
    dspMarks[1] = 54;
    dspMarks[2] = 58;
    dspMarks[3] = 56;
    
    cout<<"\nThe elements present in the array via Method 2 declaration are:\n";
    cout<<dspMarks[0]<<endl;
    cout<<dspMarks[1]<<endl;
    cout<<dspMarks[2]<<endl;
    cout<<dspMarks[3]<<endl;
     


    //         ******   CHANGES IN THE VALUES OF ARRAY  *******

    // The latest updated value will be stored at the respective index location

    //  The index '2' updated value in dspMark of Method 2
    dspMarks[2] = 1008956;

    //  The index '3' updated value in dspMark of Method 2 
    dspMarks[3] = 101263;
    cout<<"\nThe updated array showing dspMarks is as follows:\n";
    cout<<dspMarks[0]<<endl;
    cout<<dspMarks[1]<<endl;
    cout<<dspMarks[2]<<endl;
    cout<<dspMarks[3]<<endl;


    //  ******   PRINTING THE ARRAY ELEMENTS USING LOOPS IN C++    *******
     
    cout<<"\nThe array of dspMarks printed via loops in c++ is as follows:\n";
    int j = 0;


    //              USING "FOR" LOOP
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value at index "<<i<<" is "<<dspMarks[i]<<endl;
    }

     
     

 /*    //              USING "WHILE" LOOP

     
     
     while (j<4)
     {
        cout<<"The value at index "<<j<<" is "<<dspMarks[j]<<endl;
        j++;
     }
*/     


/*    //              USING "DO_WHILE" LOOP
    
    do{
        cout<<"The value at index "<<j<<" is "<<dspMarks[j]<<endl;
        j++;
    }while(j<4);
    
*/

   return 0;
}
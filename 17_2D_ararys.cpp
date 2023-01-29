#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    //      ****** 2 Dimensional Arrays  ********

    /*    Declaration
       Similar to that of matrices 
            Array declared as : int array[m][n] 
                          m = number of rows 
                          n = number of columns
     */

    int m,n,i,j;
    cout<<"Enter the number of rows and columns for the array to be printed"<<endl;
    cin>>m>>n;
    int array[m][n];

 
    //                               TAKING INPUT IN THE 2D ARRAY DECLARED 

    for(i=0;i<m;i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<"\nEnter the value of '"<<i+1<<"'th row and '"<<j+1<<"'th column "<<endl;
            cin>>array[i][j];
        }
        cout<<"\n";
    }


    //                              TAKING OUTPUT FROM THE 2D ARRAY DECLARED  ( TRAVERSAL OPERATION )

    cout<<"The array entered can be seen as:"<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<array[i][j]<<setw(3)<<" ";          // use of setwidth operator
        }
        cout<<"\n";
    }
    

//         SEARCHING OPERATION IN ARRAY


int k;
cout<<"Enter the element to be searched in the array:\n";
cin>>k;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(array[i][j]==k)
            {
                cout<<"Search Successful and element found at "<<i+1<<"*"<<j+1<<"th location of the array"<<endl;
            }
        
        }

    }

  
    return 0;
}
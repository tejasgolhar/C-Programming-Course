#include<iostream>
using namespace std;

                   //  *****  USE OF INLINE FUNCTIONS   ******

    /*      Suppose same function is called multiple times in a code to be executed;
        It will follow its regular method of first passing the actual parameter value to the formal parameters 
        or the function arguements and then executing the code in the function declared

        By using the keyword "Inline" before the definition of the function, the traditional process of passing the
        arguements and then functional code execution can be bypassed and equated with the direct return value of the 
        function to the "function call" can prevent a tedious task of the processor to followup the regular function 
        call etiquette


        ***  POINTS TO REMEMBER  ****

        1. HERE WE ARE ACTUALLY REPLACING THE FUNCTION CALL WITH THE FUNCTION CODE 

        2. WRITING THE INLINE FUNCTION BASICALLY KILLS THE USE OF FUNCTION 

        3. ONLY THOSE FUNCTIONS WHOSE CODE VALUE TAKES LESSER EXECUTION ARE TO BE MADE "INLINED", Otherwise the code 
        occupy the complete cache memory which will conjuct the code execution process which is controvertial 
        w.r.t. the actual use of the Inline 

        4. Don't use the inline function in case of -
            **Static variables when present in the function
            **When there is recursion used
            **not recommended when there are loops present in the function 
    */
inline int sum(int x, int y){
    int c=x+y;
    return c;
}
int main(){

    int a,b;
    cout<<"Enter the value of the first variable :"<<endl;
    cin>>a;
    cout<<"Enter the value of the second variable :"<<endl;
    cin>>b;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    
    // Lets simulate the function call multiple times here itself in the main funtion

    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    cout<<"The sum of the user entered values is : "<< sum(a,b)<<endl;
    return 0;
}
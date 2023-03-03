#include<iostream>
using namespace std;

//                   *******  DEFAULT ARGUEMENTS   ******

//     Default arguments are those values which are used by the function if we don’t input our value. 
//     It is recommended to write default arguments after the other arguments


float moneyReceived(int currentMoney, float factor=1.04)
// HERE, the factor value is by-default set by the user and there's no need that it to be specified during function call
// NOTE : The default arguement needs always to be specified towards the most left side of the function arguements
{
    return currentMoney * factor;
}




//               *****   Constant Arguments in C++     *******

//   Constant arguments are used when you don’t want your values to be changed or modified by the function.
//   HERE, in the below function, the value of 'p' is constant and cannot be modified anyhow 
//   Hence, is called constant arguement

/*
   //   Here, the value of *p is constant and can't be modified 
        int strlen(const char *p)
        {
        return 0;
        }
*/

int main(){
    int money = 100000;
    cout<<"\nIf you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}

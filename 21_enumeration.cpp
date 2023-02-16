#include<iostream>
using namespace std;


//*********     ENUMERATION IN C++   *************

enum month{January, February, March, April, May, June, July, August, September, October, November, December};
enum food{gulab_jam, makka, dahipuri, bhelpuri, sevpuri};


int main(){
    month this_month;
    this_month = February;
    cout<<"The current month number is "<< this_month+1<<" ."<<endl;

    food today_treat;
    today_treat = sevpuri;
    cout<<"The index value of the food you are interested to have is "<<today_treat<<"."<<endl;
    return 0;
}
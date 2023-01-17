
#include<iostream>

using namespace std;

int main()
{
    //********IF ELSE - Control Structure*********
    //Program to check whether the candidate is adult or not
    int age;
    cout<<"Welcome to Maturity Detection Center !\n Please provide your age in numerical value :";
    cin>>age;

    if (age>0 && age<18)
    {
        cout<<"Sorry to inform but you are still a kid baby"<<endl;
    }else{
        cout<<"Yeah ! You are an 'Adult' now";
    }
    
    return 0;
}
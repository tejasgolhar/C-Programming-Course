#include<iostream>

using namespace std;

int main()
{   
    //******IF ELSEIF Ladder Control Statement*******
    //Program to Strictly Check Whether you are Young, Perfect or Overaged for Military Recruitment Drive
    int age;
    cout<<"Please Provide your age in numerical value"<<endl;
    cin>>age;

    if(age>0 && age<19)
    {
        cout<<"Thanks Dear for interest ! But you are young to join military\nKeep yourself training"<<endl;
    }
    else if(age>=19 && age<35){
        cout<<"Congratulations ! You are perfect to join military in this age"<<endl;
    }else if(age<1)
    {
        cout<<"Hmm ! Seems you are yet to be born"<<endl;
    }else{
        cout<<"Regret to inform you that 'You are not eligible to join military in this age'";
    }




    return 0;
}
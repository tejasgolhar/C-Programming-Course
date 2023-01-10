#include<iostream>

using namespace std;

int main()
{   
    //           ******SWITCH Control Statement*******
    //Program to Strictly Check Whether you are Young, Perfect or Overaged for Military Recruitment Drive
    int age;
    cout<<"\nPlease Provide your age in numerical value"<<endl;
    cout<<"\nTo select your age group enter the numerical value as follows\n 0 - for Age between 1 - <19 yrs"<<endl;
    cout<<" 1 - for Age between 19 - <35\n 2 - for Age 35 & more.. yrs\n";
    cin>>age;
     
    switch (age)
    {
    case 0:
        cout<<"Thanks Dear for interest ! But you are young to join military\nKeep yourself training"<<endl;
        break;

     case 1:
        cout<<"Congratulations ! You are perfect to join military in this age"<<endl;
        break;

     case 3:
        cout<<"Regret to inform you that 'You are not eligible to join military in this age'";
        break;
    
    default:
        cout<<"Hmm ! Seems you are blind..\nRe-read the initial instructions.."<<endl;
        break;
    }
    return 0;
}
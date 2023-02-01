#include<iostream>
using namespace std;



struct student    // structure for student is generated here with the common name "student"
{
    //the entities here are of different datatypes

    string username;
    int roll;
    char section;
    float sgpa;
};

int main(){
    
    // structure details for one student named "tejas"
    struct student s1;  
    s1.username = "Raviteja";
    s1.roll = 42;
    s1.section = 'c';
    s1.sgpa = 8.8;
   
    cout<<"\nDetails for Student 1 are as follows:--"<<endl;
    cout<<"username = "<<s1.username<<endl;
    cout<<"roll number = "<<s1.roll<<endl;
    cout<<"section = "<<s1.section<<endl;
    cout<<"sgpa = "<<s1.sgpa<<endl;
     return 0;
}
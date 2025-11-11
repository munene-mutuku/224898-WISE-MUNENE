#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;

    string profile;
    cout<<"User Profile Creation"<<endl;                                                                                   "---\n";

    string FirstName;
    cout<<"Enter your first name: ";
    getline(cin, FirstName);
    cout<<"FirstName: "<< FirstName <<endl;

    string LastName;
    cout<<"Enter your last name: ";
    getline(cin, LastName);
    cout<<"LastName: "<< LastName <<endl;

    string FullName= FirstName + " " + LastName;
    cout<<"Hello, " << FullName << "! Welcome!" <<endl;

    string favouriteMeal;
    cout<<"Enter your favourite meal: ";
    getline(cin, favouriteMeal);
    cout<<"My favourite meal is: "<< favouriteMeal <<endl;

    string ambition;
    cout<<"Enter your ambition in life: ";
    getline(cin, ambition);
    cout<<"My ambition is to "<< ambition <<endl;

    cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
return 0;
}
    

    

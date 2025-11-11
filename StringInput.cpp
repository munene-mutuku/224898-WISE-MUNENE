//simple program for greetings using input name

#include <iostream>
#include <string>
using namespace std;

int main() {
    //using cin to take input from user
    string fullName;
    cout << "Enter your full  name: ";
    cin>> fullName;
    cout<<"Hi, "<< fullName << " Nice to meet you" << endl;


    //using getline to take input with spaces
    cout<< "Enter your full name: "<<endl;
    getline(cin, fullName);
    cout<<"Hi again, "<< fullName << " Nice to meet you" << endl;
    
    
    return 0;
}
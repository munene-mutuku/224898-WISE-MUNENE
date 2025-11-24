#include <iostream>
using namespace std;

int main(){
    string food;
    cout<<"enter the food you like (type 'N' to stop)"<<endl;
    getline(cin, food);

    while (food != "N"){
        cout <<"You like" << food << '.' <<endl;
        cout << "Enter another food you like (type 'N' to stop):";
        cin >> food;
    }
    cout << "you enetered N thank you for shaing food preferences!"<< endl;
    return 0;
}
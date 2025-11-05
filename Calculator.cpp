#include <iostream>
#include <cmath>
using namespace std;

// Calculator functions

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout<<"sum is : "<<num1 + num2<<endl;
    cout<<"difference is : "<<num1 - num2<<endl;
    cout<<"product is : "<<num1 * num2<<endl;
    cout<<"division is : "<<num1 / num2<<endl;
    cout<<"sqaure root of a is : "<<sqrt(num1)<<endl;
    cout<<"power of a^b is : "<<pow(num1,num2)<<endl;
    cout<<"modulas of a and b is : "<<fmod(num1,num2)<<endl;

    
    return 0;
}




//operators

#include <iostream>
using namespace std;

int main() {

    //variable declarations
    int num1=16, num2=4;

    //arithmetic operators
    cout<<"ADDITION: "<< num1 + num2 <<endl;         //addition operator +
    cout<<"SUBTRACTION: "<< num1 - num2 <<endl;      //subtraction operator -
    cout<<"MULTIPLICATION: "<< num1 * num2 <<endl;   //multiplication operator *
    cout<<"DIVISION: "<< num1 / num2 <<endl;           //division operator /
    cout<<"MODULUS: "<< num1 % num2 <<endl;            //modulus operator % 
    cout<<"INCREMENT: "<< ++num1 <<endl;               //PRE-increment operator ++
    cout<<"INCREMENT: "<< --num2 <<endl;               //POST-INCREMENT operator --
    cout<<"DECREMENT: "<< num1-- <<endl;               //PRE-decrement operator --
    cout<<"DECREMENT: "<< num2++ <<endl;              //POST-decrement operator
    cout<<"COMBINED INCREMENT AND ASSIGNMENT: "<< (num1 += 2) <<endl; //combined increment and assignment operator +=
    cout<<"COMBINED DECREMENT AND ASSIGNMENT: "<< (num2 -= 2) <<endl; //combined decrement and assignment operator -=
    cout<<"COMBINED MULTIPLICATION AND ASSIGNMENT: "<< (num1 *= 2) <<endl; //combined multiplication and assignment operator *=
    cout<<"COMBINED DIVISION AND ASSIGNMENT: "<< (num2 /= 2) <<endl; //combined division and assignment operator /=
    


    //logical operators
    cout<< "(3>2)" << "=" << (3>2) <<endl;               //greater than operator >
    cout<<"(3<2)" << "=" << (3<2) <<endl;               //less than
    cout<<"(4>=3)" << "=" << (4>=3) <<endl;             //greater than or equal to
    cout<<"(4<=3)" << "=" << (4<=3) <<endl;             //less than or equal to
    cout<<"(3==3)" << "=" << (3==3) <<endl;               //equal to operator ==
    cout<<"!(4==3)" << "=" << !(4==3) <<endl;           //not equal to operator !=

    //boolean operators(AND, OR, NOT)
    cout<< "true && true =" <<((3>2) &&  (4>=2)) <<endl;   //AND operator &&
    cout<< "true && false =" <<((3>2) && (2>4)) <<endl; //AND operator &&
    cout <<" false && false =" <<((2>3) && (4<2)) <<endl; //AND operator &&

    //boolean OR operator ||
    cout<< "true || true =" <<((3>2) ||  (4>=2)) <<endl;   //OR operator ||
    cout<< "true || false =" <<((3>2) || (2>4)) <<endl; //OR operator ||
    cout <<" false || false =" <<((2>3) || (4<2)) <<endl; //OR operator ||


    return 0;
}

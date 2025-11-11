// type casting- the process of converting a value from one data type to another
// implicit type casting- the automatic conversion of a value from one data type to another by the compiler
// explicit type casting- the manual conversion of a value from one data type to another by the

#include <iostream>
using namespace std;

//implicit type casting
//double to int conversion
int main(){
    double myNum = 15.5;
    int myNewNum, charCasted;
    myNewNum =myNum;
    cout<< myNewNum;

    //character to int conversion
    char myChar='C';
    charCasted=myChar;
    cout<<  "char to int: "<<charCasted <<endl;

    //bool to int conversion
    bool myBool=true;
    cout<<"bool to int: "<<myBool<<endl;


    //explicit type casting
    //static cast- is a C++ operator that converts a value from one data type to another

    //double to int conversion using static cast
    double myNum2= 20.678;
    int myNewNum2 = int(myNum2);
    cout<<myNewNum2<<endl;

    //int to char conversion using static cast
    char myChar2='A';
    int myInt=45;
    float myfloat=4.567;
    int myNum3;
    myChar2= static_cast<char>(myInt);
    myNum3= static_cast<int>(myfloat);
    cout<<"int to char: "<<myChar2<<endl;
    cout<<"float to int: "<<myNum3<<endl;

    return 0;
}

    




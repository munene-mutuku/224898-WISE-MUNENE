//types of variables in C++

#include <iostream>
using namespace std;

//local variable- a variable that is declared inside a function or block and is only accessible within that function or block
void exampleFunction() {
    int localVar = 10; // local variable
}

    //global variable- a variable that is declared outside of any function and is accessible from any function in the program
int globalVar = 100;

//constant variable- a variable whose value cannot be changed after it is initialized
const float PI = 3.14;

//parameter variable- a variable that is passed to a function as an argument
// they are used to receive values from the caller function
//the caller function is the function that calls another functioni
// so the parameter are the types of data that the called function will receive from the caller function

void printValue(int paramVar) { // paramVar is a parameter variable
    cout << "Parameter Variable: " << paramVar << endl;
}

//extern variable- a variable that is declared outside of any function with the extern keyword
// it is used to declare a global variable that is defined in another file
extern int externVar; // declaration of extern variable

//static variable- a variable that retains its value between function calls
void staticExample() {
    static int staticVar = 0; // static variable
    staticVar++;
    cout << "Static Variable: " << staticVar << endl;
} //output will be 1,2,3... on each call 
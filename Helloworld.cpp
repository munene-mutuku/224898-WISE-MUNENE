

 // notes

// steps of compilation
/*
1. writing source code
2. pre-processing
3. compiling
4. linking
5. loading- assigning memory for the program
*/

/*
pre -porcessing - a process of processing source code according to special instructions 
these directives tell the compiler to do something before actual compilation starts..
*/

/*
anything that starts with # is a preprocessor directive(a tool that prepares your code for the compiler)
*/

// iostream- stands for input and output,    so io-input and output,     stream- flow of data
// library- collection of pre-written code that can be used to simplify tasks
// cout- console output- displaying output on the screen
//cin- console input- taking input from the user
//cerr- console error- displaying error messages
//clog- console log- displaying log messages
// endl- end line- used to insert a new line in the output

//namespace- a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it
// std- standard- the standard namespace that contains all the standard C++ library functions and objects
//statement- a complete instruction that tells the compiler to do something
//declaration- a statement that introduces a name (identifier) and its type to the program
//expression- a combination of variables, constants, operators, and function calls that produces a value
//compound statement- a group of statements enclosed in curly braces {}
//function- a block of code that performs a specific task
//selection statement- a statement that allows the program to choose between different paths of execution (if, switch)
//iteration statement- a statement that allows the program to repeat a block of code (for, while, do-while)
//jump statement- a statement that allows the program to jump to a different part of the code (break, continue, return, goto)
//try-catch statement- a statement that allows the program to handle exceptions (try, catch, throw)
//null statement- a statement that does nothing (a single semicolon ;)
//int main-marks the entry point of the program

//#ifndef- if not defined
//#define- define a macro
//#endif- end if
// #ifdef- if defined


// variable declaration - a statement that introduces a variable and its type to the program
// variable definition - a statement that allocates memory for a variable and optionally initializes it
// initialization- the process of assigning an initial value to a variable
// accessing a variable- using the variable in an expression or statement

// a variable- a named storage location in memory that holds a value(memory location)


//data type- a classification of data that tells the compiler how to interpret the data (int, float, char, etc)
// primitive data type- a basic data type that is not composed of other data types (int, float, char, etc)
//derived data type- a data type that is composed of other data types (array, struct, class, etc)
//user-defined data type- a data type that is defined by the user (enum, union, typedef, etc)
//enumeration- a user-defined data type that consists of a set of named integral constants e.g enum Color { RED, GREEN, BLUE };
//complex data type- a data type that can hold multiple values or a combination of different types (struct, class, union, etc)

//type casting- the process of converting a value from one data type to another
//implicit type casting- the automatic conversion of a value from one data type to another by the compiler
//explicit type casting- the manual conversion of a value from one data type to another by the programmer using a cast operator

#include <iostream> 
using namespace std;

int main(){
    cout<<"Hello, World!"<<endl;
    return 0;
}

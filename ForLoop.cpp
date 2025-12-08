//for loop- when you know how many times you want to repeat something
#include <iostream>
using namespace std;

int main(){
    string correctPassword;
    string password;
    int attempts = 3;
    correctPassword = "Strathmore";
    cout<<"enter password"<<endl; 
    cin >> password;

    for( attempts<=3; attempts--;){
        if ( password == correctPassword){
            cout<<"correct password"<<endl;
            break;
        }else{
            cout<<"blocked"<<endl;
        }
    }


    //to output prime numbers from 1 to 100
int num1;
for(num1=1; num1 <=100; num1++){  // current number are checking
    int count =0; // keeps count of the numbers that would divide num1

    for (int num2=1; num2<=num1; num2++){   //checks all numbers from 1 to see if they divide num1
        if(num1% num2 == 0){ // if num1 is 5 and num2 is 5 so it is 5/5 which is 1 and num2 which is 5 divide by 0
            count++;
        }
    }
    if(count== 2){  // so the count keeps track, if the count is equal to 2 then the number is divisible by itself and 0 therefore the count is 2
                     // if the count is greater than 2 then it is a prime number
        cout<< num1<<endl;
    }

}

return 0;

}




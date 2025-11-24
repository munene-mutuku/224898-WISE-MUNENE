#include <iostream>
#include <string>
using namespace std;

int main(){
//     int num;
//     cout<<"enter number"<<endl;
//     cin >> num;
//     while (num >=12 && num<=28){
//         num+= 2;
    
//     cout << num <<", " <<endl;
//     }
// sum of whole numbers between 20 and 25

    
    // int sum = 0;
    // int num1 = 20;

    // while (num1 <= 25) {
    //     sum += num1;
    //     num1++;
    //     cout << "Sum = " << sum << endl;
    // }

    // counts the number of times a wrong password has been entered

    
        string correctPassword;
        string password;
        int attempts =3;
        correctPassword= "strathmore";

        while(attempts > 0){
            cout<<"enter password"<<endl;
            cin>> password;

            if(password == correctPassword){
                cout<<" correct password"<<endl;
                break;
            }else{
                cout<<"wrong password"<<endl;
                attempts--;
                 cout<<"password blocked"<< attempts << endl;
            }
            
        }

        return 0;
    



    

}





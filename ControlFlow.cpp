#include <iostream>
#include <string>
using namespace std;

//control flow 


// ternanry operator

// int main(){
    // int age;
    // cout<<"Please Enter the age:";
    // cin>> age;
// string message = (age >= 4) ? "Admitted to school":" Declined: Not admitted to school";
// cout<< message  <<endl;
// return 0;
// }





//nested if
//int main()
//{
    //int age2;
    //string interest;
   // cout<< "Enter the age of the child's ";
//cin>> age2;

//if (age2 >=4 && age2 <= 10){

//cout<<"Enters the childs interest";
// cin >> interest;
// if (interest == "soccer")
// {
//     cout<<"admitted to school"<<endl;
//     cout<<"assigned to soccer playgroup"<<endl;
//     return 0;
// }
// if (interest == "art"){
//     cout<<" admitted to school"<<endl;
//     cout<< " assigned to art playgroup"<<endl;
// }
// else{
//     cout<<"declines not admitted to school"<<endl;
// }
// }
// return 0;
// }

    // if, else if, else
    //  int main(){
    //     int age3;
    //     cout <<" enter age3";
    //     cin >> age3;

    //     if (age3 >=7){
    //         cout<< " admit to grade school"<<endl;
    //     }
    //     else if ( age3>=5 && age3<=6 ){
    //         cout <<"admitted to kindergarten"<<endl;
    //     }
    //     else if (  age3< 1 )
    //     cout<< " rejected" << endl;
         
    //     return 0;
    //  }



// switch case

// int main(){
//     int opt;

//     cout<<" hi. This is your BBIT sem 1 timetabke (may-aug 2024)";
//     cout<< "\n1. monday \n2 tuesday \n3 wednesday \n4 thursday \n5 friday"<<endl <<endl ;
//     cout << " please select day of choice between 1 - 5"<<endl;


//     cout<< "enter no between 1-5"<<endl;
//     cin>> opt;
//     if (opt <1 || opt > 5){
//         cout<< " invalid input pick a no from 1-5"<<endl;
//     }

//     switch (opt)
//     {
//     case 1:
//         cout<< "monday classes\n"<<endl;
//         cout<<"\t1. BBIT 1106: Math forb iz"<<endl;                 
//         cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
//             break;

//     case 2:
//         cout<<"Tuesday Classes\n..................."<<endl;
//         cout<<"\t2.BBIT 1102:Intro to Programming"<<endl;
//         cout<<"\t1. BIT 1104: Ethics"<<endl;
//         break;


//     case 3:
//         cout << "\nWednesday Classes\n-------------------" << endl;
//         cout << "\t1. BBIT 1106: Math for Business" << endl;
//         cout << "\t2. BBIT 1104: Theology" << endl;
//         cout << "\t3. BBIT 1101: Fundamentals of IT" << endl;

//         break;

//      case 4:
//         cout << "\nThursday Classes\n-------------------" << endl;
//         cout << "\t1. BBIT 1105: Accounting" << endl;
//         cout << "\t2. BBIT 1101: Fundamentals of IT" << endl;

//      case 5:
//         cout << "\nFriday Classes\n-------------------" << endl;
//         cout << "\t1. BBIT 1103: Business Computing" << endl;
//         break;
    
//     default:
//     cout << "Unexpected error!" << endl;
//         break;
//     
//     return 0;
// }



int main() {
    int age;
    int option ;

    cout << "PRE-SCHOOL ADMISSIONS PROGRAM "<<endl;

    cout << "Enter child's age: ";
    cin >> age;

    if (age < 4 || age > 10) {
        cout << "Invalid age! Child must be between 4 and 10 years." << endl;
        return 0; 
    }

    cout << "\nSelect child's interest:" << endl;
    cout << "1. Soccer"<<endl;
    cout << "2. Art"<<endl;
    cout << "3. Music"<<endl;
    cout << "4. Athletics"<<endl;
    cout << "5. Toys"<<endl;
    cout << "6. Other"<<endl;

    cout << "Enter option  ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Assign to: **Soccer Play Group" << endl;
            break;

        case 2:
            cout << "Assign to: **Art Play Group" << endl;
            break;

        case 3:
            cout << "Assign to: **Music Play Group" << endl;
            break;

        case 4:
            cout << "Assign to: **Athletics Play Group" << endl;
            break;

        case 5:
            cout << "Assign to: **Toys Play Group" << endl;
            break;

        case 6:
            cout << "Assign to: **Other Groups" << endl;
            break;

        default:
            cout << "Invalid interest option!" << endl;
    }

    return 0;
}



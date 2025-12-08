#include <iostream>
using namespace std;

int main(){
    // int num[5]; //declaration of an array of integers with size 5
    // cout<<"enter 5 numbers"<<endl;
    // cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]; //input 5 numbers from the user
    // cout<< num[0] << " " << num[1] << " " << num[2] << " " << num[3] << " " << num[4] << endl; //output the 5 numbers
    

    // int num2[8];
    // cout<<"enter 8 numbers"<<endl;
    // cin>> num2[0] >> num2[1] >> num2[2] >> num2[3] >> num2[4] >> num2[5] >> num2[6] >> num2[7];
    // for(int i=0; i<8; i++){
    //     cout<< num2[i] << " ";
    // }

    // cout<<"enter 6 numbers to be stored in an array"<<endl;
    // int sum =0;
    // int num2[6];
    // int product=1;
    // for(int j=0; j<6; j++){
    //     cin>> num2[j];
    //     sum += num2[j];
    //     product *= num2[j];
    // }
    // cout<<"the sum of the numbers is "<< endl;
    // cout<< "is "<< sum << endl;
    // cout<< "array size" <<sizeof(num2)<< endl;
    // cout<< "is "<< product << endl;

    //for each loop
    // cout<<"enter 5 numbers to be stored in an array"<<endl;
    // int num3[5];
    // int sum2=0;
    // int product=1;
    // for(int a : num3){
    //     sum2 += a;
    //     product *= a;
    // }
    // cout<<"the sum of the numbers is "<< endl;
    // cout<< "is "<< sum2 << endl;
    // cout<< "array size" <<sizeof(num3)<< endl;
    // cout<< "is "<< product << endl;

    // declaration and initialization of a 2D array
    int twoDArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    //loop through the 2D array and print the elements
    for(int r=0; r<3; r++){ //loop through rows
    for(int c=0; c<4; c++){ //loop through columns
            cout<< twoDArray[r][c] << " ";
        }
        cout<< endl; //new line after each row
    }
}
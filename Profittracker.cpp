//profit calculator

#include <iostream>
using namespace std;

int main(){
    //variable declarations
    double buyingPrice, sellingPrice, profit, loss;

    //user input
    cout<<"Enter Buying Price: ";
    cin>> buyingPrice;
    cout<<"Enter Selling Price: ";
    cin>> sellingPrice;

    //profit and loss calculation
    if(sellingPrice > buyingPrice){
        profit = sellingPrice - buyingPrice;
        cout<<"Profit: "<< profit <<endl;
    }
    else if(buyingPrice > sellingPrice){
        loss = buyingPrice - sellingPrice;
        cout<<"Loss: "<< loss <<endl;
    }
    else{
        cout<<"No Profit No Loss"<<endl;
    }

    return 0;
}

 /*
 Arithmetic Operators 
   Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want 
   and the price per cup. The program should calculate the total price, apply a 5% discount
    if the total is above a certain amount, and show the final price.     
 +, -, *, /, %
*/

#include<iostream>
using namespace std;
 
int main(){
    int cups;
    double pricepercup , totalprice , discountedprice;

    cout << "enter numbre of cups\n";
    cin>>cups;
    cout << "enter the price per cup\n";
    cin>>pricepercup;

    totalprice=cups * pricepercup;

    // apply 5% discount if total price is above 100

    if(totalprice>100){
        discountedprice=(totalprice*0.05);
        double finalprice = totalprice-discountedprice;
        cout << finalprice;
    
    }else{
        cout<<totalprice;
    }
    
    

}
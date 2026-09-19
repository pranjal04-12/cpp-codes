/*
2. If-Else Statement    
  Challenge: Write a program that checks if a tea shop is open. If the current hour
   (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it's closed.   
*/

#include <iostream>
using namespace std;

int main() {
    
    int teahours;
    cout<<"enter the current hour(0-23)";
    cin>>teahours;
    if(teahours > 8 && teahours <18){
        cout<<"shop is open";
    }else{
        cout<<"shop is closed";
    }
    
    return 0;
}
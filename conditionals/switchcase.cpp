/*
4. Switch Case      
Challenge: Write a program that lets the user select a tea type from a menu.
 Use a switch statement to display the price based on the selected tea:* Green Tea: $2   
    Black Tea: $3   Oolong Tea: $4  
 */

#include <iostream>
using namespace std;

int main() {
    int teatype;
    cout<<"select a tea type (1.Green Tea , 2.Black Tea , 3.Oolong Tea) ";
    cin>>teatype;
    switch(teatype){
        case 1:
            cout<<"$2";
            break;

        case 2:
            cout<<"$3";
            break;
        
        case 3:
            cout<<"$4";
            break;
    }
 

    return 0;
}
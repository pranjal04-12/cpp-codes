/*
1. If Statement

Challenge: Write a program that checks if the user wants to order Green Tea. 
If the user types "Green Tea," the program should confirm their order.
*/


#include <iostream>
#include<string>
using namespace std;

int main() {

    string teaorder;
    cout<<"enter your tea order";
    getline(cin,teaorder);

    if(teaorder == "green tea"){
        cout<<"order confirmed";
    }

    return 0;
}
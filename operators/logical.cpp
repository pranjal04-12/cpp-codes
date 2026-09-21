/*
4. Logical Operators     
 Challenge: Create a program that checks if a user is eligible for a tea subscription
  discount. The discount applies if the user is either a student or has purchased more 
  than 15 cups. Ask the user to input their status (student or not) and their cup count.   
     && and || operators
*/
#include <iostream>
using namespace std;

int main() {
    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 for No)? ";
    cin >> isStudent;

    cout << "How many cups of tea have you purchased? ";
    cin >> cups;

    if (isStudent || cups > 15) {
        cout << "You are eligible for a discount" << endl;
    } 
    else {
        cout << "You are NOT eligible for a discount" << endl;
    }

    return 0;
}

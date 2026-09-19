#include <iostream>
#include<string>
using namespace std;

int main() {
    string usertea;
    int teaquantity;

    cout<<"what would you like to order in tea? \n";
    getline(cin,usertea);

    cout<<"how many cups of "<<usertea <<"would ypu like to have? ";
    cin>>teaquantity;

    cout<<teaquantity<<endl;
    cout<<usertea;

    
    return 0;
}
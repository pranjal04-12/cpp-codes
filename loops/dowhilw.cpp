#include<iostream>
using namespace std;

int main(){
    string wantea;

    do{
        
        cout<<"do you want tea(yes or no)";
        getline(cin,wantea);

    }while(wantea == "yes");
    return 0;
}
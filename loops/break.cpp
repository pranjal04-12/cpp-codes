#include<iostream>
using namespace std;

int main(){
    string response;

    while(true){
        cout<<"do you want more tea('stop' to exit)\n";
        getline(cin,response);
        if(response == "stop"){
            break;
        }
        cout<<"here is your another cup of tea\n";
    }

    cout<<"no more tea will be served to you";

    return 0;
}
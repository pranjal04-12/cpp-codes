#include<iostream>
using namespace std;

int main(){
    int teacups;
    cout<<"enter the number of teacups to serve";
    cin>>teacups;

    while(teacups>0){
        teacups--;
        cout<<"serving a cup of tea\n"<<teacups<<"remaining"<<endl;
        
    }
    cout<<"all tea cups are served";
}
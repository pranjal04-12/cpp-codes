#include<iostream>
using namespace std;

int main(){
    string teatypes[3] = {"green tea","black tea","leamon tea"};

    for(int i =0;i<=2;i++){
        if(teatypes[i] == "green tea"){
            cout<<"skipping the "<<teatypes[i]<<endl;
            continue;
        }

        cout<<"brewing tea "<<teatypes[i]<<"...."<<endl;
        
    }


    return 0;
}
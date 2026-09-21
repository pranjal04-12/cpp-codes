#include<iostream>
using namespace std;

int main(){
    //lambda 
    auto prepared = [](int temp){
        cout<<"temp= " <<temp;
    };
    prepared(6);
}
#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        // data members
        string teaname; //name of the tea
        int servings; //number of servings
        vector<string> ingredients;  //list of ingredients for the tea

        //member functions
        void displayChaiDetails(){
            cout<<"tea name = "<<teaname<<endl;
            cout<<"servings = "<<servings<<endl;
            cout<<"ingredients = ";
            for(string ingredient : ingredients){
                cout<<ingredient;
            }
            cout<<endl;

        }

};
int main(){

    Chai chaiOne;

    chaiOne.teaname="lemon tea";
    chaiOne.servings=2;
    chaiOne.ingredients={"water ",  "lemon ", "honey ", "tea "};

    chaiOne.displayChaiDetails();


    Chai chaiTwo;

    chaiOne.teaname="Masala chai";
    chaiOne.servings=4;
    chaiOne.ingredients={"water","milk","honey","ginger","Masala"};

    chaiOne.displayChaiDetails();
}
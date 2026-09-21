    /*
    3. Relational Operators
    Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of
    tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. 
    Write a program to display the badge they will receive based on the number of cups they buy.
    >, >=, <, <=
    */


    

    #include<iostream>
    using namespace std;
    
    int main(){
        int teacups;
        

        cout << "enter number of teacups you purchased\n";
        cin>>teacups;

        if(teacups > 20){
            cout << "you got a gold badge";
        }else if(teacups>10 && teacups < 20){
            cout << "you got a silver badge";
        }else{
            cout << "sorry you dont get a badge";
        }
}
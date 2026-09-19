/*3. Nested If-Else    
  Challenge: A tea shop offers discounts based on the number of tea cups ordered.
   Write a program that checks the number of cups ordered and applies a discount:* 
   More than 20 cups: 20% discount    
     Between 10 and 20 cups: 10% discount 
       Less than 10 cups: No discount   
*/


#include <iostream>
using namespace std;

int main() {
    
    int teacups;
    double pricepercup=2.5, totalprice , discount;
    cout<<"enter number of teacups ordered";
    cin>>teacups;

    totalprice = pricepercup  * teacups;

    if(teacups > 20){
        discount=0.20;

    }else if(teacups >=10 && teacups <=20){
        discount = 0.10;
        
    }else{
        discount= 0;
        
    }
    totalprice -= (totalprice * discount);
    cout<<totalprice;
    return 0;
}
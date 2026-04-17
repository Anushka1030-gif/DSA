#include<iostream>
using namespace std;
// if cost price & selling price of an item is input through the keyboard,
// write a program to determine whether the seller has made profit or loss
// incurred loss or no profit no loss.also determine how much profit he made or
// loss he incurred
int main(){
    int cost,selling_price,profit,loss;
    cout<<"enter the cost price ";
    cin>>cost;
    cout<<"enter the selling price";
    cin>>selling_price;
    profit=selling_price-cost;
    loss=cost-selling_price;
    if(selling_price>cost){
        cout<<"the shopkepeer has made a profit and the percentage of profit is ";
        cout<<profit;

    }
   else if(cost>selling_price){
        cout<<"the shopkepeer has made a loss  and the percentage of loss is ";
        cout<<loss;
    }
    else{
        cout<<"both are equal";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';
    cout<<"Number of Items: "<<items<<endl;
    cout<<"Cost per item: "<<currency<<cost_per_item<<endl;
    cout<<"Total Cost: "<<currency<<total_cost<<endl;
    return 0;

}
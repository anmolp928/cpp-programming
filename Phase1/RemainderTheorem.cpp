#include<iostream>
using namespace std;
int main(){
    int dividend, divisor, quotient, remainder;
    dividend = 24;
    divisor = 12;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout<<"Quotient: "<<quotient<<endl;
    cout<<"Remainder: "<<remainder<<endl;
    cout<<"IsDividend: "<<(dividend == ((divisor*quotient) + remainder))<<endl;
    return 0;
}
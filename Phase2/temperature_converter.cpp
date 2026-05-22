#include<iostream>
using namespace std;
int main(){
    double temp;
    cout<<"Enter the temperature: ";
    cin>>temp;
    char unit;
    cout<<"Enter the unit(C/F): ";
    cin>>unit;
    if(unit == 'C'){
        cout<<"The temperature in Fahrenheit: "<<(temp * 9.0/5.0)+32<<"F"<<endl;
    }else if(unit == 'F'){
        cout<<"The temperature in Celcius: "<<(temp-32)*5.0/9.0<<"C"<<endl;
    }else{
        cout<<"Invalid Unit."<<endl;
    }
    return 0;
}
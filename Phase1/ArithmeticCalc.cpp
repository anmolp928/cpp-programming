#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char operation;
    cout<<"Enter the Operation(+,-,*,/): ";
    cin>>operation;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    switch(operation){
        case '+':
            cout<<"Addition: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Subtraction: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Multiplication: "<<num1*num2<<endl;
            break;
        case '/':
            if(num2 != 0) cout<<"Division: "<<num1/num2<<endl;
            else cout<<"Denominator is zero, division is not allowed."<<endl;
            break;
        default:
            cout<<"Enter the valid operation."<<endl;
    }
    return 0;
}
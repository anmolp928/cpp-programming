#include<iostream>
using namespace std;
int main(){
    char Arithmetic_Operator;
    double num1,num2;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    cout<<"Enter the Arithmetic Operator(+, -, *, /) to display: ";
    cin>>Arithmetic_Operator;
    switch(Arithmetic_Operator){
        case '+':
        cout<<"Addition: "<<num1+num2<<endl;
        break;
        case '-':
        cout<<"Subtraction"<<num1-num2<<endl;
        break;
        case '*':
        cout<<"Multiplication"<<num1*num2<<endl;
        break;
        case '/':
        cout<<"Division"<<num1/num2<<endl;
        break;
        default:
        cout<<"Please enter valid operator to display!."<<endl;
    }
    return 0;
}
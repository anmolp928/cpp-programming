#include<iostream>
using namespace std;
int main(){
    char Arithmetic_Operator;
    cout<<"Enter the Arithmetic Operator(+, -, *, /) to display: ";
    cin>>Arithmetic_Operator;
    switch(Arithmetic_Operator){
        case '+':
        cout<<"Addition"<<endl;
        break;
        case '-':
        cout<<"Subtraction"<<endl;
        break;
        case '*':
        cout<<"Multiplication"<<endl;
        break;
        case '/':
        cout<<"Division"<<endl;
        break;
        default:
        cout<<"Please enter valid operator to display!."<<endl;
    }
    return 0;
}
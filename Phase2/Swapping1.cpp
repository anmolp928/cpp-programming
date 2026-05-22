//Swapping using arithmetic
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped values are: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}
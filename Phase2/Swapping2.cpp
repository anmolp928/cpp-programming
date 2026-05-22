//Swapping using the third variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Swapped values are: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}
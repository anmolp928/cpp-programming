#include<iostream>
using namespace std;
int main(){
    double weight,height;
    cout<<"Enter weight(in kg) and height (in m): ";
    cin>>weight>>height;
    double bmi = weight/(height*height);
    if(bmi<18.5){
        cout<<"Underweight."<<endl;
    }else if(bmi<24.9){
        cout<<"Normal Weight."<<endl;
    }else if(bmi<29.9){
        cout<<"Overweight."<<endl;
    }else{
        cout<<"Obese."<<endl;
    }
    return 0;
}
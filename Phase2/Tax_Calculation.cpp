#include<iostream>
using namespace std;
int main(){
    double salary,tax=0;
    int taxPercent = 0;
    cout<<"Enter the salary: ";
    cin>>salary;
    if(salary < 1500){
        tax=0;
        taxPercent=0;
    }else if(salary>=1501 && salary<3000){
        taxPercent = 10;
        tax = (salary*10)/100;
    }else if(salary>=3001 && salary<5000){
        taxPercent = 20;
        tax = (salary*20)/100;
    }else{
        taxPercent=30;
        tax = (salary*30)/100;
    }
    double salaryaftertaxes = salary - tax;
    cout<<"Tax Percentage: "<<taxPercent<<"%"<<endl;
    cout<<"Salary after Taxes: "<<salaryaftertaxes<<endl;
    return 0;
}
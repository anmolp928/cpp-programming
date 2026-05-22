#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to our chatbot."<<endl;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    char membership_status;
    cout<<"Enter the membership status: ";
    cin>>membership_status;
    if(age>=18){
        if(membership_status == 'Y' || membership_status == 'y'){
            cout<<"Your're eligible for 10% discount."<<endl;
        }else{
            cout<<"You will be charged fully(no membership)"<<endl;
        }
    }else{
        cout<<"Your will be charged fully(age below 18)."<<endl;
    }
    cout<<"Thanks for visiting!"<<endl;
    return 0;
}
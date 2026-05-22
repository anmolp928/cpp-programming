#include<iostream>
using namespace std;
int main(){
    cout<<"!Lowest age among different ages!"<<endl;
    int length;
    cout<<"Enter the count of ages: "<<endl;
    cin>>length;
    int ages[length];
    cout<<"Enter the different ages: "<<endl;
    for(int i=0;i<length;i++){
        cin>>ages[i];
    }
    int lowestAge = ages[0];
    for(int age:ages){
        if(lowestAge>age){
            lowestAge = age;
        }
    }
    cout<<"Lowest age is: "<<lowestAge<<endl;
    return 0;
}
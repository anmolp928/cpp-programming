#include<iostream>
using namespace std;
int main(){
    cout<<"!Average of the ages!"<<endl;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int ages[size];
    cout<<"Enter the ages: ";
    for(int i=0;i<size;i++){
        cin>>ages[i];
    }
    double average, sum=0;
    for(int age:ages){
        sum+=age;
    }
    average=sum/size;
    cout<<"Average of the ages is: "<<average<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int sum=0;
    while(num!=0){
        int ldigit = num%10;
        sum += ldigit;
        num/=10;
    }
    cout<<"Sum Of its digits: "<<sum<<endl;
    return 0;
}
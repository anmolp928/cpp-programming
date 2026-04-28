#include<iostream>
using namespace std;
int main(){
    int PI = 3.14;
    int radius;
    cout<<"Enter the radius of Circle: "<<endl;
    cin>>radius;
    cout<<"Area of Circle: "<< (PI*radius*radius)<<endl;
    cout<<"Circumference of Circle: "<< (2*PI*radius)<<endl;
    return 0;
}
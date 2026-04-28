#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,area;
    cout<<"Enter the length of two equal sides: ";
    cin>>a;
    cout<<"Enter the value of third side: ";
    cin>>b;
    if((2*a)>b && a>0){
        area = sqrt(2)*a*a*0.25; //1/2*a*a*sin(45)
        cout<<"Area of isosceles triangle: "<<area<<endl;
        cout<<"Perimeter of isosceles triangle: "<<((2*a)+b)<<endl;
    }else{
        cout<<"Enter valid lengths"<<endl;
    }
    return 0;
}
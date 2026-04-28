#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,area;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    c = sqrt((a*a)+(b*b));
    cout<<"Hypotenuse: "<<c<<endl;
    if((a+b)>c && a,b,c>0){
        area = 0.5 * a * b;
        cout<<"Area of right triangle: "<<area<<endl;
    }else{
        cout<<"Enter valid sides"<<endl;
    }
    return 0;
}
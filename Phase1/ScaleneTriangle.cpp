#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,s,area;
    cout<<"Enter the first side of triangle: ";
    cin>>a;
    cout<<"Enter the second side of triangle: ";
    cin>>b;
    cout<<"Enter the third side of triangle: ";
    cin>>c;
    if(a>0 && b>0 && c>0){
        if((a+b)>c && (a+c)>b && (b+c)>a){
            s=(a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area of scalene triangle: "<<area<<endl;
        }else{
            cout<<"The given lengths doesn't form valid triangle"<<endl;
        }
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int side;
    cout<<"Enter the side: ";
    cin>>side;
    cout<<"Perimeter of square: "<<(4*side)<<endl;
    cout<<"Area of square: "<<pow(side,2)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int length, breadth,perimeter,area;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    perimeter = 2*(length+breadth);
    area = length * breadth; 
    cout<<"Area of rectangle: "<<area<<endl;
    cout<<"Perimeter of rectangle: "<<perimeter<<endl;
    return 0;
}
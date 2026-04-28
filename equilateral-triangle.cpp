#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int side,area,perimeter;
    cout<<"Enter all three equal sides: ";
    cin>>side;
    if(side>0){
        area = sqrt(3)*side*side*0.25;
        perimeter = 3*side;
        cout<<"Area of equilateral Triangle: "<<area<<endl;
        cout<<"Perimeter: "<<perimeter<<endl;
    }else{
        cout<<"Enter valid side"<<endl;
    }
    return 0;
}
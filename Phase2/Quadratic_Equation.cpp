#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c, x1, x2, D, rP, iP;
    cout<<"Enter the value of coefficient(a, b, c): ";
    cin>>a>>b>>c;
    cout<<"Calculate Discriminant: ";
    D = (b*b) - 4*a*c;
    if(a==0){
        cout<<"Error: a can't be zero in quadratic equation."<<endl;
        return 0;
    }
    if(D>0){
        cout<<"As (D>0) so roots are real and distinct: ";
        cout<<"Now by Quadratic formula x = (-b(+-)sqrt(b^2-4ac)/2a: "<<endl;
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }else if(D==0){
        cout<<"As (D=0) so roots are real and equal i.e x1=x2: "<<endl;
        x1=x2=(-b)/(2*a);
        cout<<"x1=x2= "<<x1<<endl;
    }else{
        cout<<"As (D<0) so roots are complex & different/real and imaginary: "<<endl;
        cout<<"So real part = -b/2a and imaginary part = sqrt(-D)/2a and it is expressed as (rP)(+-)i(P): "<<endl;
        rP = -b/(2*a);
        iP = (sqrt(-D))/(2*a);
        cout<<"Complex roots are: "<<endl;
        cout<<"x1 = "<<rP<<"+"<<"i"<<iP<<endl;
        cout<<"x2 = "<<rP<<"-"<<"i"<<iP<<endl;
        cout<<"Or"<<endl;
        cout<<rP<<"(+-)i"<<iP<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"The greatest number is: "<<a<<endl;
    }else if(b>=a && b>=c){
        cout<<"The greatest number is: "<<b<<endl;
    }else if (c>=a && c>=b){
        cout<<"The greatest number is: "<<c<<endl;
    }else if(a == b && b == c && a == c){
        cout<<"All number are equal."<<endl;
    }else{
        cout<<"Enter the valid numbers."<<endl;
    }
    return 0;
}
//we can find by ternary Operator 
// int max = (a>b)?(a>c ? a:c):(b>c ? b:c)
//Using max()function <algorithm>
//int result = max({a,b,c})
//int result = max(a,max(b,c)); //Nested max()
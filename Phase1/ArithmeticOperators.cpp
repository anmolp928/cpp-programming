#include<iostream>
using namespace std;
int main(){
    int a=42, b=21;
    cout<< (a+b)<<endl;
    cout<< (a-b)<<endl;
    cout<< (a*b)<<endl;
    cout<< (a/b)<<endl;
    cout<< (a%b)<<endl;

    int c=22;
    ++c;
    cout<<c<<endl;
    --c;
    cout<<c<<endl;
    int d = 24;
    int e = d++;
    cout<<d<<" "<<e<<endl;
    d--;
    cout<<d<<endl;
    return 0;
}
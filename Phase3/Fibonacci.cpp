#include<iostream>
using namespace std;
int main(){
    int a=0, b=1,sum=0;
    cout<<a<<" "<<b<<" ";
    while(b<100){
        sum=a+b;
        a=b;
        b=sum;
        if(b>100){
            break;
        }
        cout<<sum<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    if(n%2==0){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
}
//if((n&1)==0)cout<<"even";else if((n&1)==1)cout<<"Odd";
//e.g6-> 110&001-> 000 ->even , 7 -> 111&001->001-> Odd
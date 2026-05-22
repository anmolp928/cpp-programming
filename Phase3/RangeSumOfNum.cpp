#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the initial range, m: ";
    cin>>m;
    cout<<"Enter the final range, n: ";
    cin>>n;
    int sum=0;
    if(m<n){
        for(int i=m;i<=n;i++){
            sum+=i;
        }
        cout<<"Sum of the integers b/w two numbers: "<<sum<<endl;
    }else if(m>n){
        cout<<"Invalid range! Please try again."<<endl;
    }else if(m==n){
        sum=n;
        cout<<"Sum is: "<<sum<<endl;
    }
    return 0;
}
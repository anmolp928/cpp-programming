//1+3+5+..+n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth value: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i=i+2){
        sum+=i;
    }
    int last_term = (n%2==0)?(n-1):n;
    cout<<"Sum of series 1+3+...+"<<last_term<<" is "<<sum<<endl;
    return 0;
}
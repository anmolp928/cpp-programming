#include<iostream>
//include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;
    for(int i=1;i*i<=n;i++){
        //for(int i=0;i<=sqrt(n);i++)
        if(n%i==0){
            count = count + 1;
            if(n/i != i){
                count = count + 1;
            }
            if(count>2) break;
        }
    }
    if(count ==2){
        cout<<"Prime"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
//time complexity: O(sqrt(n)), space: O(1)
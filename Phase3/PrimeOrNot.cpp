#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count = count + 1;
        }
    }
    if(count == 2){
        cout<<"Prime"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
//TIME COMPLEXITY:  O(n) and space:O(1)
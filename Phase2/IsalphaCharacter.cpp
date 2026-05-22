#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an character: ";
    cin>>ch;
    if(isalpha(ch)){
        cout<<ch<<" is an alphabet."<<endl;
    }else{
        cout<<ch<<" is not an alphabet."<<endl;
    }
    return 0;
}
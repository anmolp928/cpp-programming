#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the character: ";
    cin>>c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<"The character is a Vowel"<<endl;
    }else{
        cout<<"The character is Consonant."<<endl;
    }
    return 0;
}
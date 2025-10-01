#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character\n";
    cin>>ch;
    if('a'<=ch && ch<='z'){
    //if(97<=ch && ch<=121)
        cout<<"lower case";
    }
    else {
        cout<<"upper case";
    }
    return 0;
}
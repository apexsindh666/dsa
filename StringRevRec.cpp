#include<iostream>
using namespace std;

void reverse(string n){
    if(n.length()==0){
        return ;
    }
    string ros=n.substr(1);
    reverse(ros);
    cout<<n[0];
}
int main(){
    string s;
    cout<<"enter the string to be reversed"<<endl;
    cin>>s;
    reverse(s);
    return 0;
}
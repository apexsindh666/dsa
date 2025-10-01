#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the values of a and b\n";
    cin>>a>>b;
    if(a>b){
        cout<<b<<" is minimum number in "<<a<<" and "<<b<<endl;
    }else{
         cout<<a<<" is minimum number in "<<a<<" and "<<b<<endl;
    }
    return 0;
}
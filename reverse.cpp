#include<iostream>
using namespace std;
void reverse(int num){
    int rem=0;
    while(num>0){
        rem=num%10;
        num=num/10;
        cout<<rem<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the value of decimal number to be revesred\n";
    cin>>n;
    reverse(n);
    return 0;
}
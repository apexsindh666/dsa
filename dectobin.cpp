#include<iostream>
using namespace std;
void binary(int num){
    int rem=0;
    int ans=0;
    int pow=1;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow=pow*10;
    }cout<<ans<<endl;
}
int main(){
    int n;
    cout<<"enter the value of decimal number to be converted\n";
    cin>>n;
    binary(n);
    return 0;
}
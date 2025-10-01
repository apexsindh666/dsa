#include<iostream>
using namespace std;
void decimal(int num){
    int rem=0;
    int ans=0;
    int pow=1;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans+=(rem*pow);
        pow=pow*2;
    }cout<<ans<<endl;
}
int main(){
    int n;
    cout<<"enter the binary number to be converted\n";
    cin>>n;
    decimal(n);
    return 0;
}
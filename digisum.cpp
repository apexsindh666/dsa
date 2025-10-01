#include<iostream>
using namespace std;
int lastnum(int n){
    int digitsum=0;
    while(n>0){
        int lastdi=n%10;
        n=n/10;
        digitsum+=lastdi;
    }return digitsum;
}
int main(){
    cout<<"enter the value of n\n";
    int n;
    cin>>n;
    int s=lastnum(n);
    cout<<s<<endl;
    return 0;
}
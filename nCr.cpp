#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }return f;
}
int binomial(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);
    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n,r;
    cout<<"enter the value of n and r\n";
    cin>>n>>r;
    int s=binomial(n,r);
    cout<<s<<endl;
    return 0;
}

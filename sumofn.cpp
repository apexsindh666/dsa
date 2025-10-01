#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    // int i=1;
    // while(i<=n){
    //     sum +=i;
    //     i++;
    // }


    //sum=n*(n+1)/2;
    
    cout<<"sum of n is "<<sum<<endl;
    return 0;
}
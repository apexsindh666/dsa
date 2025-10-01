#include<iostream>
using namespace std;
int main(){
    int n,fact;
    cout<<"enter the the value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }    
    cout<<"factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}
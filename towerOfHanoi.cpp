#include<iostream>
using namespace std;
void towerOfHanoi(int n,char s,char d,char h){
if(n==0){
    return;
}
    towerOfHanoi(n-1,s,h,d);
    cout<<"move from "<<s<<" to "<<d<<endl;
    towerOfHanoi(n-1,h,d,s);   
    }
int main(){
    int n;
    cout<<"enter the number of blocks"<<endl;
    cin>>n;
    towerOfHanoi(n,'A','C','B');
    return 0;
}
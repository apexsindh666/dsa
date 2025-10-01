#include<iostream>
using namespace std;
int main(){
    float SI, principle,time,rate;
    cout<<"enter the principle amount\n";
    cin>>principle;
    cout<<"enter the time duration\n";
    cin>>time;
    cout<<"enter the rate of interest\n";
    cin>>rate;
    SI=principle*time*rate/100;
    cout<<"simple interest is"<<SI<<endl;
    return 0;
}
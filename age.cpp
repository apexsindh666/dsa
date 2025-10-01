#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age of the person: ";
    cin>>age;
    if(age>=18){
        cout<<"person is eligible for driving licsense\n";
    }
    else{
        cout<<"person is not eligible for licsense\n";
    }
    return 0;
}
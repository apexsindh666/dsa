#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    
    getline(cin,str);
    cout<<"converting to uppercase case"<<endl;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    cout<<"converting to lower case"<<endl;
    for(int i=0;i<n;i++){
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
    }cout<<str<<endl;
    return 0;
}
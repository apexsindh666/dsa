#include<iostream>
using namespace std;
void permutaion(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutaion(ros,ans+ch);
    }
}
int main(){
    string s;
    cout<<"enter the string to print the possible permutations"<<endl;
    cin>>s;
    permutaion(s,"");
    return 0;
}
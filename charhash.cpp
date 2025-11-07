//charachter hashing using array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    char arr[n];
    int hash[26]; //creating a hash array
    for(int i=0;i<n;i++){
        hash[i]=0;//initialising to zero
    }
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]-'a']++; //counnting the occourance of each character and storing
    }
    int q;
    cout<<"enter the number of queries"<<endl;
    cin>>q;
    while(q--){
        char ch;
        cout<<"enter the character"<<endl;
        cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }
    return 0;
}
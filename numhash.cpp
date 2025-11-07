//number hashing using arrays
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    int m=0;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m=max(m,arr[i]);
    }
    int hash[m+1]; //initialising the hash array
    for (int i = 0; i <= m; i++) {
        hash[i] = 0; //initialising all the elements to zero
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;   //counting the number of times the element occur
    }
    int q;
    cout<<"enter the num of queries"<<endl;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number to be searched"<<endl;
        cin>>num;
        if(num<=m){
        cout<<hash[num]<<endl;}else{
            cout<<'0'<<endl;
        }
    }return 0;
}
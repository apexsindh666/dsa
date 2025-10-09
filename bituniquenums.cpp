#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum^=arr[i];
    }
    return xorsum;
}
int main(){
    int n;
    cout<<"enter the size of the arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=unique(arr,n);
    cout<<"the unique number is "<<s<<endl;
    return 0;
}
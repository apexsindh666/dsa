#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nthe elements are"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nrecord breaking elemnts are ";
    int maxs=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>maxs && (i==n-1||a[i]>a[i+1])){
            cout<<a[i]<<" ";
        }
        maxs=max(maxs,a[i]);
    }
    cout<<endl;
    return 0;
}
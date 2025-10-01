#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // rearranging
    for(int i=0;i<n;i++){
        while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1]!=arr[i]){
            int temp=arr[i];
            arr[i]=arr[temp-1];
            arr[temp-1]=temp;
        }
    }
    // finding the element
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            return 0;
        }
    }
    cout<<"the element is "<<n+1<<endl;
    return 0;
}
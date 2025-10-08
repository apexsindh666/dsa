#include<iostream>
using namespace std;
void subSets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the elements\n";
    cin>>arr[i];
}
subSets(arr,n);
    return 0;
}
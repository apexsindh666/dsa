#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n) return -1;
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }return -1;
}
int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cout<<"enter the element to be searched"<<endl;
cin>>key;
int s=firstocc(arr,n,0,key);
int l=lastocc(arr,n,0,key);
cout<<s<<" "<<l<<endl;
    return 0;
}
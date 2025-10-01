#include<iostream>
using namespace std;
int bs(int n,int arr[],int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            return mid;
        }
    }return -1;
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"the sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"enter the element to be searched\n"<<endl;
    cin>>target;
    cout<<bs(n,arr,target)<<endl;
    return 0;
}
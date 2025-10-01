#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int currentSum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxsum=max(maxsum,currentSum);
    }return maxsum;
}
int main(){
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter. the elemnts\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum;
    int nonWrapSum;
    nonWrapSum=kadane(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum=totalSum+kadane(arr,n);
    cout<<max(wrapSum,nonWrapSum)<<endl;
    return 0;
}
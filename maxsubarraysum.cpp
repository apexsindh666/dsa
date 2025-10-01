//brutes method
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" element :";
        cin>>arr[i];
    }
    for(int st=0;st<n;st++){
        for(int end =st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }cout<<" ";
        }cout<<endl;
    }
    int maxs=INT_MIN;
     for(int st=0;st<n;st++){
        int sum=0;
        for(int end =st;end<n;end++){
            sum+=arr[end];
            maxs=max(sum,maxs);
            }
        }
    cout<<"max subarray is = "<<maxs<<endl; 
    return 0;
}

// //kadanes algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int maxs=INT_MIN;
// int sum=0;
// for(int i=0;i<n;i++){
//     sum+=i;
//     maxs=max(sum,maxs);
//     if(sum<0){
//         sum=0
//     }
// }return maxsum;
// }
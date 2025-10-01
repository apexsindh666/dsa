// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of elements\n";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"element"<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     int start=0,end=n-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<"element"<<i+1<<" "<<arr[i]<<"\n";
//     }
//     return 0;
// }

//reversing a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cout<<i+1<<" element is :";
        cin>>num[i];
    }
    int start=0,end=num.size()-1;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
    for(int i:num){
        cout<<i<<" ";
    }cout<<endl;
    return 0;   
}
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>pairsum(vector<int>nums,int target){
//     vector<int>ans;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the size of vector\n";
//     cin>>n;
//     vector<int>nums(n);
//     for(int i=0;i<n;i++){
//         cout<<i+1<<"element:";
//         cin>>nums[i];
//     }

// int target;
// cout<<"enter the target\n";
// cin>>target;

// vector<int>ans=pairsum(nums,target);
// cout<<ans[0]<<","<<ans[1]<<endl;
// return 0;
// }


//for sorted array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>pairsum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i=0,j=n-1;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }return ans;
}
int main(){
    int n;
    cout<<"enter the size of vector\n";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cout<<i+1<<"element:";
        cin>>nums[i];
    }

int target;
cout<<"enter the target\n";
cin>>target;

vector<int>ans=pairsum(nums,target);
cout<<ans[0]<<","<<ans[1]<<endl;
return 0;
}

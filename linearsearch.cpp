#include<iostream>
using namespace std;
int search(int n,int arr[],int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
}
int main(){
    int n,key;
    cout<<"enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elemnts\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key to be searched\n";
    cin>>key;
    int s=search(n,arr,key);
    if(s!=-1){
        cout<<"element is found at "<<s<<" index";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}

// // using vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int linearSearch(const vector<int>& nums, int key) {
//     for(int i = 0; i < nums.size(); i++) {
//         if(nums[i] == key)
//             return i;  
//     }
//     return -1;  
// }

// int main() {
//     vector<int> nums = {10, 20, 30, 40, 50};
//     int key;
//     cout << "Enter the key to search: ";
//     cin >> key;

//     int index = linearSearch(nums, key);
//     if(index != -1)
//         cout << "Element found at index: " << index << endl;
//     else
//         cout << "Element not found." << endl;

//     return 0;
// }

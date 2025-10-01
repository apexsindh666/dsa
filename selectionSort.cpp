#include<iostream>
using namespace std;
// // Selection Sort function
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i; // assume current index is the smallest
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j; // update index of smaller element
//             }
//         }
//         // swap smallest element with element at i
//         swap(arr[i], arr[minIndex]);
//     }
// }


int main(){
    int n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"the sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
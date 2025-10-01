#include <iostream>
using namespace std;

void input(int n, int arr[]) {
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
}

int maxIndex(int n, int arr[]) {
    int idx = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[idx]){
            idx = i;
        }
    }
    return idx;
}

int minIndex(int n, int arr[]) {
    int idx = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[idx]){
            idx = i;
        }
    }
    return idx;
}

void swapMaxMin(int arr[], int maxIdx, int minIdx){
    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;
}

void output(int n, int arr[]){
    cout<<"Array elements after swapping max and min:\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];

    input(n, arr);

    int maxIdx = maxIndex(n, arr);
    int minIdx = minIndex(n, arr);

    swapMaxMin(arr, maxIdx, minIdx);

    output(n, arr);

    return 0;
}

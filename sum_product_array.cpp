// waf to calculate sum and product of all the numbers in an array
#include <iostream>
using namespace std;
void input(int n,int arr[n]){
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" element\n";
        cin>>arr[i];
    }
}
int sum(int n,int arr[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }return sum;
}
int product(int n,int arr[n]){
    int m=1;
    for(int i=0;i<n;i++){
        m= m*arr[i];
    }return m;
}

int main(){
    int n;
    cout<<"enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    input(n,arr);
    int s=sum(n,arr);
    int p=product(n,arr);
    cout<<"the sum of array is "<<s<<endl;
    cout<<"the product of array is "<<p<<endl;
    return 0;
}

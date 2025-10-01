#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows and coloumns\n"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements\n"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the transpose of the matrix is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
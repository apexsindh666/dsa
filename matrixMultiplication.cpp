#include<iostream>
using namespace std;
int main(){
    int n,m,r;
    cout<<"enter the numbero f rows and coloumns"<<endl;
    cin>>n>>m>>r;
    int m1[n][m];
    int m2[m][r];
    cout<<"enter the elements of m1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"enter the elements of m2"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<r;j++){
            cin>>m2[i][j];
        }
    }
    int ans[n][r];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            ans[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<m;k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
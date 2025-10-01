#include <iostream>
using namespace std;
int intersection(int n, int ar1[n], int ar2[n]){
    int count=0;
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (ar1[i] == ar1[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) {
            continue; 
        }
        for(int j=0;j<n;j++){
            if(ar1[i]==ar2[j]){
                count++;
                cout<<"the intersection elements are "<<ar1[i]<<" \n";
                break;
            }
        }
    }return count;
}

int main(){
    int n;
    cout<<"enter the number of elements in array\n";
    cin>>n;
    int ar1[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" element of ar1\n";
        cin>>ar1[i];
    }
    int ar2[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" element of ar2\n";
        cin>>ar2[i];
    }
    int s=intersection(n,ar1,ar2);
    cout<<"the total intersected elements:"<<s<<endl;
    return 0;
}
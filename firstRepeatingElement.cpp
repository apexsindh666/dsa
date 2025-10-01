#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstrepeating=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                firstrepeating=i;
                goto done;
            }
        }
    }
    done:
    if(firstrepeating==-1){
        cout<<"there is no repeating element\n"<<endl;
    }else{
        cout<<"repeating element is found at "<<firstrepeating<<endl;
    }
    return 0;
}
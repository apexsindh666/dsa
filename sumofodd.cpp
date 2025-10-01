// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n\n";
//     cin>>n;
//     int oddsum=0;
//     for(int i=0;i<=n;i++){
//         if(i%2!=0){
//            oddsum+=i; 
//         }
//     }cout<<oddsum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n\n";
//     cin>>n;
//     int evesum=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//            evesum+=i; 
//         }
//     }cout<<evesum<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int oddsum=0;
    int i=0;
    while(i<=n){
        if(i%2!=0){
            oddsum+=i;
            }
                i++;
        
    }
    cout<<oddsum<<endl;
    return 0;
}
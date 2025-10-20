#include<iostream>
using namespace std;
int main(){
    bool isprime=true;
    int n;
    cout<<"enter the number to be checked\n";
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
         cout<<n<<" is a   prime number";
    }
    else{
    cout<<n<<" is a  not prime number";
    }
    return 0;
}

// //using function
// #include<iostream>
// using namespace std;
// int prime(int n){
//     int isprime=1;
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             isprime=-1;
//             break;
//         }
//     }return isprime;
// }
// int main(){
//     int n;
//     cout<<"enter te number to be checked\n";
//     cin>>n;
//     int s=prime(n);
//     if(s==1){
//         cout<<n<<" is a   prime number";
//     }
//     else{
//         cout<<n<<" is a  not prime number";
//     }
//     return 0;
// }


// //to print all prime numbers from 2 to n
// #include<iostream>
// using namespace std;
// int prime(int n){
//     int isprime=1;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }return 1;
// }
// void printprime(int n){
//     for(int i=2;i<=n;i++){
//         if(prime(i)){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter te number \n";
//     cin>>n;
//     printprime(n);
//     return 0;
// }
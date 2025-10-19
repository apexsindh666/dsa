#include<iostream>
using namespace std;
int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    int count=0;
    if(s>e){
        return 0;
    }
    for(int i=1;i<=6;i++){
        count+=countPath(s+i,e);
    }
    return count;
}
int main(){
    cout<<"enter the starting and ending position"<<endl;
    int start,end;
    cin>>start>>end;
int paths=countPath(start,end);
cout<<"number of paths is "<<paths<<endl;
    return 0;
}
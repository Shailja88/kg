#include<bits/stdc++.h>
using namespace std;
int countdivisor(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int start,end;
    cin>>start>>end;
    int count=0;
    for(int i=start;i<=end;i++){
        if(countdivisor(i)==9){
            cout<<i<<" ";
            count++;
        }
        
    }
    cout<<endl;
    cout<<count<<endl;
}
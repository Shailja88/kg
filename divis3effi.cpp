#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int rem=0;
    for(auto in:arr){
        rem=rem+in;
        rem=rem%3;
    }
    if(rem==0)cout<<1;
    else cout<<0;
}
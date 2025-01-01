#include<bits/stdc++.h>
using namespace std;
int cal(int n){
    int val=0;
    while(n){
        int rem=n%10;
           val+=rem;
        n=n/10;
    }
    return val;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        count+=cal(arr[i]);
    }
    if(count%3==0){
        cout<<1;
    }
    else
    cout<<0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    int sum=0;
    for(int i=2;i<=sqrt(n);i++){
        if(v[i]==1)continue;
        for(int j=i*i;j<=n;j=i+j){
             v[j]=1;
        }
    }
    for(int i=2;i<=n;i++){
        if(v[i]==0){
            // cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<sum<<endl;
}

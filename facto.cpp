#include<bits/stdc++.h>
using namespace std;
unsigned int factor(unsigned int n){
    if(n<=1)return 1;
    return n*factor(n-1);
}
int main(){
    unsigned int n;
    cin>>n;
    // //without recursion 
    // int ans=1;
    // for(int i=1;i<=n;i++){
    //     ans*=i;
    // }
    // cout<<ans<<endl;
    cout<<factor(n);
}
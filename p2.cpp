#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0)return 0;
    
    for(int i=1;i<=n;i++){
         for(int j=1;j<i;j++){
             cout<<i<<"*";
         }
         cout<<i<<endl;
    }
    for(int i=n;i>=1;i--)
     {
         for(int j=i-1;j>=1;j--){
            cout<<i<<"*";
         }
         cout<<i<<endl;
     
}
// cout<<1<<endl;
}
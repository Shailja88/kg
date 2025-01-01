#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string mp="ZABCDEFGHIJKLMNOPQRSTUVWXY";
    string ans="";
    while(n){
       int rem=n%26;

        ans=mp[rem]+ans;
        if(rem==0){
            n=(n/26 )-1;
        }
       else  n=n/26;
    }
    
    cout<<ans<<endl;

}
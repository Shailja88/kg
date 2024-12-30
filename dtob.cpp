// 100
#include<bits/stdc++.h>
using namespace std;
string dtob(int n){
    string ans="";
    if(n==0)return "0";
    while(n){
        int rem=n%2;
        ans=char(rem+'0')+ans;
        n=n/2;
    }
    return ans;
}

int main(){
   int n;
   cin>>n;
   cout<<dtob(n)<<endl;
}
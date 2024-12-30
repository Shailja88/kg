#include<bits/stdc++.h>
using namespace std;
string dtoh(int n){
    if(n==0)return "0";
    string ans="";
    // map<int,char>mp{{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
   string mp="0123456789ABCDEF";
    while(n){
        int rem=n%16;
            ans=mp[rem]+ans; 
        n=n/16;
    }
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dtoh(n);
}
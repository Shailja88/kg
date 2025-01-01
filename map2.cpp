#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int ans=0;
    int d=1;
    for(int i=s.size()-1;i>=0;i--){
         int x=s[i]-'A'+1;
         ans=ans+x*d;
        d=d*26;
    }
    cout<<ans;
}
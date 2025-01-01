#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // string ans="";
    // for(int i=s.size()-1;i>=0;i--){
    //     ans+=s[i];
    // }
    // cout<<ans<<endl;
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
}
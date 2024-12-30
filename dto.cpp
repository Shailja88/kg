#include<bits/stdc++.h>
using namespace std;
//decimal to octal
string doo(int n){
    if(n==0)return "0";
    string ans="";
    while(n){
        int rem=n%8;
        ans=char(rem+'0')+ans;
        n=n/8;

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<doo(n)<<endl;

}
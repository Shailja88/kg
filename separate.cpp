#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // cout<<"number "<<n<<endl;
    string s=to_string(n);
    //  cout<<"string "<<s<<endl;
    //  cout<<s.size()<<"size "<<endl;
    for(int i=0;i<s.size()-1;i++){
        cout<<s[i]<<" ";
    }
    cout<<s[s.size()-1];
    cout<<endl;
}
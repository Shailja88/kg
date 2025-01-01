#include<bits/stdc++.h>
using namespace std;
int main(){
    //binary to decimal
    string s;
    getline(cin,s);
    int n=s.size();
    int po=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
      ans+= ((s[i]-'0')*pow(2,po));
     ++po;
    

    }
    cout<<ans<<endl;
}
//111
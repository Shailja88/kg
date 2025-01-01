#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()==0){
        cout<<"no words"<<endl;
        return 0;
    }
    int count=1;
    for(int i=0;i<s.size();i++){
           if(s[i]>='A' && s[i]<='Z'){
            count++;
           }
    }
    cout<<count<<endl;
    
}
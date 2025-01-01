#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int i,l;
    cin>>i>>l;
    unsigned int p=pow(2,l);
    if(i>p){
        cout<<"invalid";
        return 0;
    }
    cout<<p-i<<endl;
    
}
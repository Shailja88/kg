#include<bits/stdc++.h>
using namespace std;
int main(){
    //smallest amoung four number 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini;
      if(a>b){
      mini=b;
      }
      else 
      mini=a;
    if(mini>c){
        mini=c;
    }
    if(mini>d){
        mini=d;
    }
    cout<<mini<<endl;
}
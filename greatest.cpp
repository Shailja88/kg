#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int maxi;
   if(a>b){
    maxi=a;
   }
   else maxi=b;
   if(b>maxi)
   maxi=b;
 cout<<maxi;
}
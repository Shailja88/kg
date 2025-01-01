#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    //doctor will take 10 minutes 
    if(x>=10){
         cout<<0;
         return 0;
     }
    int diff=10-x;
     int ans=(diff)*(n-1);
     cout<<ans<<endl;


}
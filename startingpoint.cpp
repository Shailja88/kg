#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int n;
        cin>>n;
        vector<int>arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<2*n;i=i+2){
            x=x-arr[i];
            y=y-arr[i+1];
        }

     cout<<x<<" "<<y<<endl;
    }
    
}
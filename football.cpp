#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int count1=0,count2=0;
    while(z>1){
        if(x%z==0){
            x--;
            count1++;
        }
        else if(y%z==0){
            y--;
            count2++;
        }
        else{
            z--;
        }
    }
    cout<<count1<<" "<<count2<<endl;
}
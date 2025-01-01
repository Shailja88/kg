#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    // int b=0;
    int count=0;
    while(temp){
        int bit=temp&1;
        if(bit==1)count++;
        temp=temp>>1;
    }
    cout<<count<<endl;
}
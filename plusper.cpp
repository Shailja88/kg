//123
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int digit=0;
    while(temp>0){
       digit++;
       temp=temp/10;
    }
    int ans=0;
    temp=n;
    while(temp>0){
        int val=temp%10;
         ans+=pow(val,digit);
         temp=temp/10;
    }
    if(n==ans){
        cout<<"valid"<<endl;

    }
    else 
    cout<<"Invalid"<<endl;
}

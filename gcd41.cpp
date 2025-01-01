#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a=max(n1,n2);
    int b=min(n1,n2);
    while(b){
     int rem=a%b;
     a=b;
     b=rem;
    }
    cout<<a<<endl;
}
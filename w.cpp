#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y,z;
    cin>>x>>y>>z;
    double deno=x*y+y*z+z*x;
    double ans=(x*y*z)/deno;
    cout<<ans;
}
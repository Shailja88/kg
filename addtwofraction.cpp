#include<bits/stdc++.h>
using namespace std;
int gcdd(int x,int y){
    int a=max(x,y);
    int b=min(x,y);
    while(b){
       int rem=a%b;
       a=b;
       b=rem;
    }
    return a;
}
int main(){
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    //make b1= b2 
    int x,y;//x/y
     if(b1!=b2){
        a1=a1*b2;
        a2=a2*b1;
        b1=b1*b2;
        b2=b1*b2;
    }
    x=a1+a2;
    y=b1;
    //find gcd of x and y
    int g=gcdd(x,y);
    x=x/g;
    y=y/g;
    cout<<x<<" "<<y<<endl;

}
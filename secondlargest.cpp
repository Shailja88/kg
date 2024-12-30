#include<bits/stdc++.h>
using namespace std;
//second largest number 
int main(){
//find the largest number
int a,b,c;
cin>>a>>b>>c;
int slarg;
 if(a>=b && a>=c){
    //largest is a 
    //then find the second largest
    // 3 1 3
      if(b>=c){
        slarg=b;
      }
      else slarg=c;
 }
 else if(b>=c && b>=a){
      if(c>=a)
      slarg=c;
    else
    slarg=a;
 }
 else{
    if(b>=a)
    slarg=b;
     else
     slarg=a;
 }
 cout<<slarg<<endl;
}
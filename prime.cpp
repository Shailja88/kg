/* Write a program in c to find if number is prime or not if number is prime print number is prime and print ssqare root of number up to two decimal points precision 
 */
 //my approach 
#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n==1)return false;
    int count=0;
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0)count++;
    }
    return count==0;
}
int main(){
int n;
cin>>n;
bool val=check(n);
if(val==1){
 cout<<"prime number "<<endl;
 cout<<fixed<<setprecision(2)<<sqrt(n)<<endl;
}
else{
    cout<<"not a prime number";
}
}
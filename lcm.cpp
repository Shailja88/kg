#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num1,num2;
    cin>>num1>>num2;
    long long pro=num1*num2;
    long long a=max(num1,num2);
    long long b=min(num1,num2);
    while(b>0){
        long long rem=a%b;
        a=b;
        b=rem;
    }
///b is the gcd
//lcm*gcd=prod
long long gcd=a;
long long  lcm=(pro)/gcd;
cout<<lcm<<endl;
}
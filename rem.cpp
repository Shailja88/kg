#include<bits/stdc++.h>
using namespace std;
    // cout<<(num1%num2)<<endl;
int main(){
    //method2 
    int num1,num2;
    cin>>num1>>num2;
    int divisor=num1/num2;
    int rem=num1-(divisor*num2);
    cout<<rem<<endl;   
}
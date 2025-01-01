#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0){
        cout<<"Leap Year"<<endl;
    }
    else if(n%100 !=0 && n%4==0){
        cout<<"Leap year"<<endl;
    }
    else {
        cout<<"Not leap year"<<endl;
    }
}
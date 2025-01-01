#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    if(n!=10 || s[2]!='-'||s[5]!='-'){
        cout<<"Invalid input "<<endl;
        return 0;
    }
    int day=stoi(s.substr(0,2));
    int month=stoi(s.substr(3,2));
    int year=stoi(s.substr(6,4));
    vector<int>ye{-1,31,28,31,30,31,30,31,31,30,31,30,31};
    if(day<=0 || day>ye[month] || month<=0 || month>12){
        cout<<"Invalid day"<<endl;
        return 0;
    }
    cout<<ye[month]<<endl;
}
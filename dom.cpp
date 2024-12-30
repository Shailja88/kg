#include<bits/stdc++.h>
using namespace std;
int main(){
    string date;
    cin>>date;
    if(date.size()!=10 || date[2]!='-'||date[5]!='-'){
        cout<<"invalid entry "<<endl;
        return 0 ;
    }
    int day=stoi(date.substr(0,2));
    int month=stoi(date.substr(3,2));
    int year=stoi(date.substr(6,4));
    if(month<1 || month>12){
        cout<<"invalid month "<<endl;
        return 0;
    }
    vector<int>mon={31,28,31,30,31,30,31,31,30,31,30,31};
    if(day<1 || day> mon[month-1]){
        cout<<"invalid day"<<endl;
        return 0;
    }
    cout<<mon[month-1]<<endl;
}
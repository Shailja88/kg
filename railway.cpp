#include<bits/stdc++.h>
using namespace std;
int main(){
   string time;
   cout<<"enter time hh:mm:ss PM/AM"<<endl;
   getline(cin,time);
   int hour=stoi(time.substr(0,2));
   int minute=stoi(time.substr(3,2));
   int sec=stoi(time.substr(6,2));
   string ap=time.substr(9,2);
   if(hour<0 || hour> 12 || minute<0 || minute>59 || sec<0 || sec>59 || time.size()!=11){
    cout<<"invalid ";
    return 0;
    }
   transform(ap.begin(),ap.end(),ap.begin(), ::toupper);
   if(ap=="PM" && hour!=12){
    hour+=12;
   }
   else if(ap=="AM" && hour==12){
    hour=0;
   }
   printf("%02d:%02d:%02d\n",hour,minute,sec);

}
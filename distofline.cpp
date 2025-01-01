#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,b1,b2;
    cin>>a1>>b1>>a2>>b2;
    //(a1,b1) (a2,b2)
   //sqrt( (a2-a1)^2 + (b2-b1)^2)
    double x1=(a2-a1)*(a2-a1);
    double y1=(b2-b1)*(b2-b1);
    y1=y1+x1;
    y1=sqrt(y1);
    cout<<y1<<endl;


}
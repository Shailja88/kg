//area of circle when diameter is given 
#include<iostream>
#include<iomanip>
#define pi 3.14
using namespace std;
int main(){
    double dia;
    cin>>dia;
    double r=dia/2;
    double area=pi*r*r;
    cout<<fixed<<setprecision(2)<<area<<endl;

}
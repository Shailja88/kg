//

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int a=max(num1,num2);
    int b=min(num1,num2);
    while(b>0){
        int rem=a%b;
        a=b;
        b=rem;

    }
    cout<<a<<endl;
}
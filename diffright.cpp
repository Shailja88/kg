// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int count=0;
//     while(num1 || num2){
//         count++;
//         int x1=num1&1;
//         int x2=num2&1;
//         x1=x1^x2;
//         if(x1==1) {
//             break;
//         }
//         num1=num1>>1;
//         num2=num2>>1;
//     }
//     cout<<count<<endl;

// }



//method2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int xoR=a^b;
    cout<<log2(xoR & -xoR)+1<<endl;
}
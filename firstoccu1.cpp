#include<bits/stdc++.h>
using namespace std;
class Solve{
  public:
  // 6 
  int first1(int n){
    int count=0;
    while(n){
        count++;
        if(n&1==1)return count;
     
        n=n>>1;
    }
    return count;
  }

};
//driver code

int main(){

 cout<<"Enter the number "<<endl;
 int n;
 cin>>n;

 cout<<log2(n & -n) + 1<<endl;
//  Solve ob;
//  cout<<ob.first1(n);

}
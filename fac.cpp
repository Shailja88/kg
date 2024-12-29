#include<bits/stdc++.h>
using namespace std;
class Fact{
   public:
    int facto(int x){
      if(x<=1)return 1;
      return x*facto(x-1);
    }
};
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  Fact ob;
  cout<<ob.facto(n)<<endl;
}

#include<bits/stdc++.h>
using namespace std;
class Fact{
  private:
     unsigned int fun(int n,vector<unsigned int>&dp){
      if(n<=1)return 1;
      if(dp[n]!=-1)return dp[n];
      return dp[n]=n*fun(n-1,dp);
    }
   public:
    unsigned int facto(int x){
      vector<unsigned int>dp(x+1,-1);
     return fun(x,dp);
    }
};
int main(){
  unsigned int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  Fact ob;
  cout<<"factorial of "<<n<<" is : ";
  cout<<ob.facto(n)<<endl;
}

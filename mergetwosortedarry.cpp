#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the value n1 and n2"<<endl;
    cin>>n1>>n2;
    vector<int>ans;
    vector<int>ar1(n1);
    vector<int>ar2(n2);
    cout<<"Enter "<<n1<<" sorted elements "<<endl;
    for(int i=0;i<n1;i++){
        cin>>ar1[i];
    }
    cout<<"Enter "<<n2<<" sorted elements "<<endl;
    for(int i=0;i<n2;i++){
        cin>>ar2[i];
    }
   int i=0,j=0;
   while(i<n1 && j<n2){
        if(ar1[i]>ar2[j]){
            ans.push_back(ar2[j]);
            j++;
        }
        else{
            ans.push_back(ar1[i]);
            i++;
        }
   }
   while(i<n1){
      ans.push_back(ar1[i]);
      i++;
   }
   while(j<n2){
      ans.push_back(ar2[j]);
      j++;
   }
   for(auto in:ans)
   {
    cout<<in<<" ";
   }
   cout<<endl;
}
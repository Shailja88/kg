#include<bits/stdc++.h>
using namespace std;

int main(){
int sum;
cin>>sum;
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// bool flag=false;
// unordered_set<int>st;
// st.insert(arr[0]);
// for(int i=1;i<n;i++){
//     int x=sum-arr[i];
//     if(st.find(x)!=st.end()){
//         cout<<"present "<<endl;
//         flag=true;
//         break;
//     }
//     st.insert(arr[i]);
// }
// if(flag==false)cout<<"not present"<<endl;
// }
sort(arr.begin(),arr.end());
int i=0; int j=n-1;
bool flag=false;
while(i<j){
    int s=arr[i]+arr[j];
    if(s==sum){
        flag=true;
        cout<<"present"<<endl;
        break;
    }
    else if(s>sum){
        j--;
    }
    else{
        i++;
    }
}
if(flag==false)cout<<"Not present"<<endl;
}

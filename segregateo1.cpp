#include<bits/stdc++.h>
using namespace std;
// void segragate(vector<int>&arr){
//     int n=arr.size();
//     int i=0,j=n-1;
//     //brute force
//     int countzero=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             countzero++;
//         }
//     }
//     for(int i=0;i<countzero;i++){
//         arr[i]=0;
//     }
//     for(int i=countzero;i<n;i++){
//         arr[i]=1;
//     }

// }
void segragate(vector<int>&arr){
    int i=0;
    int n=arr.size();
    int j=n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
                j--;
                i++;
            }
            else if(arr[i]==0)
            {i++;}
        
        else { j--;}
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       segragate(arr);
    for(auto in:arr){
        cout<<in<<" ";
    }
}
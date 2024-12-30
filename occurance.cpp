#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the lenght of the array "<<endl;
    cin>>n;
    //create a vector that has length of n;
    vector<int>arr(n);
    cout<<"Please insert values into the array in the sorted fashion  "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int flag=false;
    int start=-1,end=-1;
    ///
    int x;
    cout<<"Please enter the value which you need to find in the array "<<endl;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
             if(flag==false){
                start=i;
                flag=true;
             }
             end=i;
        }
        if(arr[i]>x)break;
    }
    if(flag==false){
        cout<<"NO OCCURANCES";
    }
    else{
        cout<<start<<" "<<end;
    }
}
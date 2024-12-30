#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             if(j==0 || j==col-1 || i==0 ||i==row-1){
                cout<<1;
             }
            else 
            cout<<0;

        }
        cout<<endl;
    }
}
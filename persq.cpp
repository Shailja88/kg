// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     if(x<0)return "invalid"<<endl;
//     double s=sqrt(x);
//     int r=(int)s;
//     if(r==s)cout<<"perfect square "<<endl;
//     else 
//     cout<<"invalid "<<endl;
// }
#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    if (x < 0) return false;  // Negative numbers can't be perfect squares

    int low = 0, high = x;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midSquared = (long long)mid * mid;  // Avoid overflow

        if (midSquared == x) {
            return true;  // Found a perfect square
        } else if (midSquared < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;  // Not a perfect square
}

int main() {
    int x;
    cin >> x;

    if (isPerfectSquare(x)) {
        cout << "perfect square" << endl;
    } else {
        cout << "invalid" << endl;
    }

    return 0;
}

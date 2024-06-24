#include<bits/stdc++.h>
using namespace std;

// void reverseNum(int n){
//     int revNum = 0;
//     while(n>0){
//         int lastDigit = n % 10;
//         n = n / 10;
//         revNum = (revNum * 10) + lastDigit;
//     }
//     cout<<revNum;
// }
int reverseNum(int x) {
        int revNum = 0;
        while(x > 0){
            int lastDigit = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + lastDigit;
        }
        return revNum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = reverseNum(n);
        cout<<res<<endl;
    }
    return 0;
}
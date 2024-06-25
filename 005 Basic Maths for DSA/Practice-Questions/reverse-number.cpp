#include <bits/stdc++.h>
using namespace std;

int reverseNum(int x){
    int revNum = 0;
    while (x > 0){
        int lastDigit = x % 10;
        x = x / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    return revNum;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int res = reverseNum(n);
        cout << res << endl;
    }
    return 0;
}
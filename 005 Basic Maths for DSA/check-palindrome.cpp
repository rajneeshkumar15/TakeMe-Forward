#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int originalNum = n;
    int revNum = 0;
    while (n > 0){
        int lastDigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    if(revNum == originalNum){
        return true;
    }else{
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans = checkPalindrome(n);
        cout<<ans<<endl;
    }
    return 0;
}
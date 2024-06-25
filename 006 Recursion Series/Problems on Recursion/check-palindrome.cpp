#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string str, int n){
    if( i >= n/2) return true;
    if(str[i] != str[n - i - 1]) return false;
    return checkPalindrome(i+1, str, n);
}
int main()
{
    string str = "121";
    int n = str.size();
    bool ans = checkPalindrome(0, str, n);
    cout<<(ans ? 1 : 0)<<endl;
    return 0;
}
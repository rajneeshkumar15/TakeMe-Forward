#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10;
        count++;
        n = n / 10;
    }
    return count;

    /*

        use [ log10(number) + 1 ] to count digits.

        int count = log10(n) + 1;
        return count;
    */
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res = countDigit(n);
        cout<<res;
    }
    return 0;
}
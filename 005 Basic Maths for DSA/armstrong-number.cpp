#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int originalNum = n;
    int sum = 0;
    int numOfDigits = log10(n)+1;
    while(n>0){
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, numOfDigits);        
        n = n / 10;
    }
    return (sum == originalNum);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans = armstrong(n);
        cout<<ans<<endl;
    }
    return 0;
}
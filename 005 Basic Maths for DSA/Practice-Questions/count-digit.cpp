#include<bits/stdc++.h>
using namespace std;

/*
    https://www.geeksforgeeks.org/problems/count-digits5716/1
*/
void countDigit(int n){
    int original = n;
    int cnt=0;

    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit != 0 && original % lastDigit == 0){
            cnt++;
        }
        n = n / 10;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        countDigit(n);
    }
    return 0;
}
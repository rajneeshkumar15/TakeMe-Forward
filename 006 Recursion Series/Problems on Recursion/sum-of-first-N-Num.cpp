/* 
    https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

    Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
    n=5
    output=225
*/
#include<bits/stdc++.h>
using namespace std;

int sumOfSeries(int n){
    int sum = (n*(n+1)/2);
    return sum*sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = sumOfSeries(n);
        cout<<ans;
    }
    return 0;
}
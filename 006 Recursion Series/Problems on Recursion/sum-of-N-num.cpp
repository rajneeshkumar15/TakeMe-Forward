#include<bits/stdc++.h>
using namespace std;

void sumOfSeries(int i, int sum){
    if(i < 1){
        cout<<sum<<endl;
        return;
    }
    sumOfSeries(i - 1, sum + i);
}
int sumOfSeriesFunctional(int n){
    if(n == 0) return 0;
    return n + sumOfSeriesFunctional(n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = sumOfSeriesFunctional(n);
        cout<<ans;
    }
    return 0;
}
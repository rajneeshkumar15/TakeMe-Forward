#include<bits/stdc++.h>
using namespace std;

int factorialOfN(int n){
    if(n < 0) return 0;
    if(n == 0 || n == 1) return 1;
    return n * factorialOfN( n - 1);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = factorialOfN(n);
        cout<<ans<<endl;
    }
    return 0;
}
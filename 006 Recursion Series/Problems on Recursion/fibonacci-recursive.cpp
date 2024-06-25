#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return n;
    int last = fibonacci(n-1);
    int sLast = fibonacci(n-2);
    return last + sLast;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = fibonacci(n);
        cout<<ans<<endl;
    }
    return 0;
}
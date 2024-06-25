#include<bits/stdc++.h>
using namespace std;

void factors(int n){
    vector<int> ls;
    for(int i = 1;i <= sqrt(n); i++){
        /* 
            use i*i <=n instead for better TC
            6*6 <= 36 true,
            7*7 <= 36 false
        */
        if(n % i == 0){
            ls.push_back(i);
            if(i != n / i){
                ls.push_back(n / i);
            }
        }
    }
    // (n log n)
    sort(ls.begin(), ls.end());
    // O(n) n is no. of factors
    for(auto it: ls){
        cout<<it<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        factors(n);
    }
    return 0;
}
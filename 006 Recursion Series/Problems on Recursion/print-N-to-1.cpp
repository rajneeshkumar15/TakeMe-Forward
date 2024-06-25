#include<bits/stdc++.h>
using namespace std;

void printReverseCounting(int i, int n){
    if(i < 1) return;
    cout<<i<<" ";
    printReverseCounting(i - 1, n);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printReverseCounting(n, n);
    }
    return 0;
}
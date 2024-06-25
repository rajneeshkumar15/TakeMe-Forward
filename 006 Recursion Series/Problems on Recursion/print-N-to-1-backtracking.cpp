#include<bits/stdc++.h>
using namespace std;

void printReverseCounting(int i, int n){
    if(i > n) return;
    printReverseCounting(i+1, n);
    cout<<i<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printReverseCounting(1, n);
    }
    return 0;
}
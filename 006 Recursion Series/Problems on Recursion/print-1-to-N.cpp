#include<bits/stdc++.h>
using namespace std;

void printCounting(int i, int n){
    if(i > n) return;
    cout<<i<<" ";
    printCounting(i+1, n);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printCounting(1, n);
    }
    return 0;
}
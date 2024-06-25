#include<bits/stdc++.h>
using namespace std;

void printCounting(int i, int n){
    /* 
        backtracking: recursive finding solution to 
        a problem and then return the answer
    */
    if(i < 1) return;
    printCounting(i - 1, n);
    cout<<i<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printCounting(n, n);
    }
    return 0;
}
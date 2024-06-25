#include<bits/stdc++.h>
using namespace std;

void printCounting(int count, int n){
    if(count > 4) return;
    cout<<count<<" ";
    printCounting(count + 1, n);
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
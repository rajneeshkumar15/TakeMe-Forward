#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n) return;
    cout<<"Rajneesh"<<endl;
    printName(i+1, n);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printName(1, n);
    }
    return 0;
}
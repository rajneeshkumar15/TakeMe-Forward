#include<bits/stdc++.h>
using namespace std;

void extractionOfDigit(int n){
    while(n>0){
        int lastDigit = n % 10;
        cout<<lastDigit<<endl;
        n = n / 10;
    }   
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        extractionOfDigit(n);

    }
    return 0;
}
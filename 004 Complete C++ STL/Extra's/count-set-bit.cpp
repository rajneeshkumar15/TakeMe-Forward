#include<bits/stdc++.h>
using namespace std;

/*
    __builtin_popcount(int number);
    is used to count the no. of set bit.
*/
int main()
{
    int n = 7;
    int cnt = __builtin_popcount(n);
    cout<<"Number of set bits in n is: "<<cnt;

    // __builtin_popcountll for very huge input
    long long num = 165786578687;
    int cnt2 = __builtin_popcountll(num);
    cout<<cnt2;
    return 0;
}
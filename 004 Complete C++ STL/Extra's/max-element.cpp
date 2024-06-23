#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7,8,2,4,6,13,9};
    int n = v.size();
    int maxi = *max_element(v.begin(), v.end());
    cout<<maxi;
    return 0;
}
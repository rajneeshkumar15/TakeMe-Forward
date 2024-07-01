#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int>& a, int n){
    next_permutation(a.begin(), a.end());
    return a;
}
int main()
{
    vector<int> v{3,1,2};
    int n = v.size();
    vector<int> ans = nextGreaterPermutation(v, n);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
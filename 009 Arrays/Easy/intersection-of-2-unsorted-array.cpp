#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    unordered_set<int> st;  // each element in the result must be unique
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) i++;
        else if (b[j] < a[i]) j++;
        else {
            st.insert(a[i]);
            i++;
            j++;
        }
    }
    vector<int> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> a = {4,9,5};
    vector<int> b = {4,9,9,4};
    vector<int> result = intersection(a, b);
    for(auto it: result){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
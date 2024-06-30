#include<bits/stdc++.h>
using namespace std;

bool checkArray(vector<int> &arr, int n){
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return false;
}
int main()
{
    vector<int> arr = {1,2,1,3,4};
    int n = arr.size();
    bool ans = checkArray(arr, n);
    cout<<ans<<endl;
    return 0;
}
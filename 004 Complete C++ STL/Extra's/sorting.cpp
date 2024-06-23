#include<bits/stdc++.h>
using namespace std;

int main()
{
    // sort()

    // sorting array
    int arr[] = {9,6,4,7,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // sorting vector
    vector<int> v = {9,6,4,7,2,1,3};
    int m = v.size();
    sort(v.begin(), v.end());
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    // sorting in descending

    vector<int> k = {9,6,4,7,2,1,3};
    int s = k.size();
    sort(k.begin(), k.end(), greater<int>());
      for(auto it: k){
        cout<<it<<" ";
    }
    return 0;
}
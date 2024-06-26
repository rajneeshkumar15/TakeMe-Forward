#include<bits/stdc++.h>
using namespace std;

vector<int> frequ(int a[], int n){
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    int maxF = 0, minF = n;
    int maxElement = 0, minElement = 0;

    for(auto it: mpp){
        int count = it.second;
        int element = it.first; 

        if(count > maxF){
            maxElement = element;
            maxF = count;
        }
        if(count < minF){
            minElement = element;
            minF = count;
        }
    }
    
    if(maxF == minF && maxElement > minElement){
        return {minElement, minElement};
    }
    return {maxElement, minElement};
}

int main()
{
    int arr[] = {12,17,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = frequ(arr, n);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int longestSubArraySumBrute(vector<int>& arr, int k){
    int n = arr.size();
    int len = 0;
    for(int start=0;start<n;start++){
        int currentSum = 0;
        for(int end = start;end<n;end++){
            currentSum+=arr[end];
            if(currentSum == k){
                len = max(len, end - start + 1);
            }
        }
    }
    return len;
}
int longestSubArraySumBetter(vector<int>& arr, long long k){
    unordered_map<long long, int> mpp;
    int maxLen = 0;
    long long sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum == k){
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        mpp[sum] = i;
    }
    return maxLen;
}
int main()
{
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    long long k = 3;
    int result = longestSubArraySumBetter(arr, k);
    cout<<result;
    return 0;
}
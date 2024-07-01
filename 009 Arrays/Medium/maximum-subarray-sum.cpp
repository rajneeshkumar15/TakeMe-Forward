#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumBrute(int arr[], int n){
    /*
        Time Complexity - O(n^3)
        Space Complexity - O(1)
    */
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                maxi = max(sum, maxi);
            }
        }
    }
    return maxi;
}

int maxSubarraySumBetter(int arr[], int n){
    /*
        Time Complexity - O(n^2)
        Space Complexity - O(1)
    */
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
   
int maxSubarraySumOptimal(int arr[], int n){
    /*
        Variety 1: Return the maximum sum
        Time Complexity - O(n)
        Space Complexity - O(1)
    */
    int maxi = INT_MIN;
    int sum = 0;
    bool allNegative = true;
    if(n<=0) return 0;
    for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
            allNegative = false;
            break;
        }
    }
    if (allNegative) {
        maxi = arr[0];
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
    }
    return maxi;
}

vector<int> maxSubarraySumOptimal2(int arr[], int n) {
    /*
        Time Complexity - O(n)
        Space Complexity - O(1)
    */
    int start = 0, end = 0, currentStart = 0;
    int maxi = INT_MIN;
    int sum = 0;
    bool allNegative = true;
    if (n <= 0) {
        return vector<int>();
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            allNegative = false;
            break;
        }
    }
    vector<int> result;
    if (allNegative) {
        maxi = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
                start = end = i;
            }
        }
        result.push_back(arr[start]);
    } else {
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum > maxi) {
                maxi = sum;
                start = currentStart;
                end = i;
            }
            if (sum < 0) {
                sum = 0;
                currentStart = i + 1;
            }
        }
        for (int i = start; i <= end; i++) {
            result.push_back(arr[i]);
        }
    }
    return result;
}
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = maxSubarraySumOptimal2(arr, n);
    for(auto it = ans.begin();it!=ans.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

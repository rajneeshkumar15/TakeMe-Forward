#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumBrute(int arr[], int n, int target){
    /*
        Time Complexity - O(n^2)
    */
    vector<int> result;
    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                found = true;
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }
    return result;
}

vector<int> twoSumBetter(int arr[], int n, int target){
    /*
        Time Complexity - O(n log n)
        Space Complexity - O(n)
    */
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1, -1};
}

vector<int> twoSumOptimal2Pointer(int arr[], int n, int target){
    /*
        Time Complexity - O(n log n)
        Space Complexity - O(1) extra space, O(N) for the algorithm
    */
    int left = 0, right = n - 1;
    sort(arr, arr+n);
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return {left, right};
        else if(sum < target) left++;
        else right--;
        }
    return {-1, -1};
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14;
    vector<int> ans = twoSumOptimal2Pointer(arr, n, target);
    for(auto it = ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int sLargestOptimal(vector<int> &arr, int n){
    // Time Complexity - O(n) 
    int largest = arr[0], sLargest = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }  
    return sSmallest; 
}

vector<int> getSecondOrderElements(vector<int> &arr, int n){
    int sLargest = sLargestOptimal(arr, n);
    int sSmallest = secondSmallest(arr, n);
    return {sLargest, sSmallest};
}
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int n = arr.size();
    vector<int> ans = getSecondOrderElements(arr, n);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
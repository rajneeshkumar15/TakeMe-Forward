#include<bits/stdc++.h>
using namespace std;

/*
    Brute Approach
    sort the array and return the last element.
    Time Complexity - O(n log n)
    Space Complexity - O(1)
*/
int largestElementBrute(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

/*
    Optimal Approach
    assume the first element of array is largest, and through
    looping and if-condition compare each element with largest. 
*/
int largestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int ans = largestElementBrute(arr, n);
    cout<<ans<<endl;
    return 0;
}
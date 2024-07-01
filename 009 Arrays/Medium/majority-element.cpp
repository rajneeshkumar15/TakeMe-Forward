#include<bits/stdc++.h>
using namespace std;

int majorityElementBrute(int arr[], int n){
    /*
        Time Complexity - O(n^2)
    */
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > n/2){
            return arr[i];
        }
    }
}

int majorityElementBetter(int arr[], int n){
    /*
        Time Complexity - O(n log n)
        Space Complexity - O(n)
    */
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second > n / 2){
            return it.first;
        }
    }
    return -1;
}

int majorityElementOptimal(int arr[], int n){
    /*
        Moore`s Voting Algorithm
        Time Complexity - O(n)
        Space Complexity - O(1)
    */
    int cnt = 0;
    int element;
    for(int i=0;i<n;i++){
        if(cnt == 0){
            cnt=1;
            element = arr[i];
        }
        else if(arr[i] == element){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == element)cnt1++;
    }
    if(cnt1 > n / 2 ){
        return element;
    }
    return -1;
}
int main()
{
    int arr[] = {2,2,1,3,1,1,3,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = majorityElementOptimal(arr, n);
    cout<<result<<endl;
    return 0;
}
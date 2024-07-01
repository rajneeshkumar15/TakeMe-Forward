#include<bits/stdc++.h>
using namespace std;

void rearrangeBrute(int arr[], int n){
    /*
        Time Complexity - O(n) + O(n) = O(2n)
        Space Complexity - O(n)
    */
    vector<int> pos, neg;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n / 2; i++){
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
}

vector<int> rearrangeOptimal(int arr[], int n){
    /*
        Time Complexity - O(n)
        Space Complexity - O(n)
    */
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1; // starting point
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {3,1,-2,-5,2,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> result = rearrangeOptimal(arr, n);
    for(auto it: result){
        cout<<it<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*
    Brute force
    sorting and for loop
    Time Complexity - O(n log n) + O(n)
    Space Complexity - O(1)
*/
int sLargestBrute(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    int sLargest;
    for(int i=n-2;i>=0;i--){
        if(arr[i] != largest){
            sLargest = arr[i];
            break;
        }
    }
    return sLargest;
}
/*
    2 pass technique

    Time Complexity - O(2n)
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
int sLargestBetter(vector<int> &arr, int n){
    int largest = largestElement(arr, n);
    int sLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > sLargest && arr[i] != largest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

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
int main()
{
    vector<int> arr = {1,7,7,7,7,7};
    int n = arr.size();
    int ans = sLargestOptimal(arr, n);
    cout<<ans<<endl;
    return 0;
}
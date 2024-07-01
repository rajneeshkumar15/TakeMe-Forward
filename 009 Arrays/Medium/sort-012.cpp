#include<bits/stdc++.h>
using namespace std;

void sort012Brute(int arr[], int n){
    /*
        Time Complexity - O(n log n)
        Space Complexity - O(1) Auxiliary space, O(n) for solving the problem
    */
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort012Better(int arr[], int n){
    /*
        Time Complexity = O(2n)
    */
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) { // O(n)
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i = 0; i < cnt0; i++) { //  O(cnt0)
        arr[i] = 0;
    }
    for(int i = cnt0; i < cnt0 + cnt1; i++) {   //  O(cnt1)
        arr[i] = 1;
    }
    for(int i = cnt0 + cnt1; i < n; i++) {  //  O(cnt2)
        arr[i] = 2;
    }
}

void sort012OptimalDNF(int arr[], int n){
    /*
        Time Complexity - O(n)
        Space Complexity - O(1)
    */
    int low = 0, mid = 0, high = n - 1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012OptimalDNF(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    cout<<"The reversed array is: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

// Two- Pointer Recursion Approach
void reverseArray(int arr[], int start, int end) {
    if (start < end) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

// Single Pointer Recursion Approach
void reverseArray1(int i,int arr[],int n){
    if(i >= n/2 ) return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray1(i + 1,arr,n);
}
int main() {
    int arr[] = {5,4,3,2,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray1(0,arr,n);
    printArray(arr, n);
    return 0;
}

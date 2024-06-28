#include<bits/stdc++.h>
using namespace std;

void mergeArr(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left<=mid && right <=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
        
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(int arr[], int low, int high){
    /*
        Divide and Merge
        Time Complexity - O(n * log base2 n) in all cases
        Space Complexity - O(n)
    */ 
    if(low>=high)  return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    mergeArr(arr, low, mid, high);
}
int main()
{
    int arr[] = {3,1,2,4,1,5,2,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;
    merge_sort(arr, low, high);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
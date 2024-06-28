#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity: O(n^2) where array is unsorted, worst and average time complexity
    O(n) when array is sorted (Best Case)
*/

/*
    Recursive Approach

    void is(int arr[], int n, int i) {
        if (i < n) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
            is(arr, n, i + 1);
        }
    }
    void insertionSort(int arr[], int n){
        is(arr, n, 1);
    }

*/
void insertion_sort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
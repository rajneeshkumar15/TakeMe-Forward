#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(n log n )
int pivot(vector<int> &a, int low, int high) {
    int p = a[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (a[i] <= p && i <= high - 1) {
            i++;
        }
        while (a[j] > p && j >= low + 1) {  // Corrected condition here
            j--;
        }
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void qs(vector<int> &a, int low, int high) {
    if (low < high) {
        int pivotIndex = pivot(a, low, high);
        qs(a, low, pivotIndex - 1);
        qs(a, pivotIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr, int low, int high) {
    qs(arr, low, high);
    return arr;
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    vector<int> ans = quickSort(arr, low, high);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity - 
*/
/*
    Recursive Approach

    void bubbleSort(vector<int>& arr, int n) 
    {
        if (n == 1)
            return;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        bubbleSort(arr, n-1);
        
    }
*/
void bubble_sort(int arr[], int n){
    int isSorted = 0;
    for(int i = n -1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSorted = 1;
            }
        }
        if(isSorted == 0){
            break;
        }
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
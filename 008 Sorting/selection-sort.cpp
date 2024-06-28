#include <bits/stdc++.h>
using namespace std;

/*
    Time Complexity - ~O(n^2)
*/

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
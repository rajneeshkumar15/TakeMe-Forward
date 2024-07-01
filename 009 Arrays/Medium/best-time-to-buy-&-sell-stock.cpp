#include<bits/stdc++.h>
using namespace std;

int returnMaxProfit(int arr[], int n){
    int mini = arr[0], profit = 0, cost;
    for(int i=1;i<n;i++){
        cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    return profit;
}
int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = returnMaxProfit(arr, n);
    cout<<result<<endl;
    return 0;
}
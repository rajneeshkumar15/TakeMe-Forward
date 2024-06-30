#include<bits/stdc++.h>
using namespace std;

void leftRotateByDplaceBrute(vector<int> &arr, int n, int d){
    d = d % n;
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }
}
void leftRotateByDPlaceOptimal(vector<int> &arr, int n, int d){
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int d = 3;
    leftRotateByDPlaceOptimal(arr, n, d);
    for(auto it: arr){
        cout<<it<<" ";
    }
    return 0;
}
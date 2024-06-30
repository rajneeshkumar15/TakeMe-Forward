#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {6,7,8,4,1};
    int n = arr.size();
    int target = 10;
    int ans = linearSearch(arr, n, target);
    cout<<ans<<endl;
    return 0;
}
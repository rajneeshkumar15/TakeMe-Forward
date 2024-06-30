#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &arr, int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it: st){
        arr[index++] = it;
    }
    arr.resize(index);
}

int removeDuplicates(vector<int> &arr, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int removeDup(vector<int> &arr, int n){
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            cnt++;
        }
    }
    return (n - cnt);
}
int main()
{
    vector<int> arr = {1,1,2,2,2,3,3};
    int n = arr.size();
    // removeDuplicate(arr, n);
    // for(auto it: arr){
    //     cout<<it<<" ";
    // }
    int ans = removeDup(arr, n);
    cout<<ans<<endl;
    return 0;
}
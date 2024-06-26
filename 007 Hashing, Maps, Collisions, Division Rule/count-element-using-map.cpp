#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]++;
    }
    // Iteration in the map
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;

        cout<<mpp[num]<<endl;
    }
    return 0;
}
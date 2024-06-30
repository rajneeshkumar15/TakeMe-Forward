#include<bits/stdc++.h>
using namespace std;

vector<int> interectionOf2sortedArray(vector<int>& a, vector<int>& b){
    /*
        Brute Force
        Time Complexity - O(n^2)
        Space Complexity = O(n2)
    */
    int n1 = a.size();
    int n2 = b.size();
    vector<int> visited(n2,0);
    vector<int> ans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i] == b[j] && visited[j] == 0){
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if(b[j] > a[i]){
                break;
            }
        }
    }
    return ans;
}
vector<int> interectionOf2sortedArray2Pointer(vector<int>& a, vector<int>& b){
    /*
        Optimal Approach - 2 Pointer Approach
        Time Complexity - O(n1 + n2)
        Space Complexity - O(min(n1, n2))
    */
    int i=0;
    int j=0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans;
    while(i < n1 && j < n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {1,2,2,1};
    vector<int> b = {2,2};
    vector<int> result = interectionOf2sortedArray2Pointer(a,b);
    for(auto it: result){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
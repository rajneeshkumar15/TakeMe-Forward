#include<bits/stdc++.h>
using namespace std;

vector<int> unionOf2SortedArray(vector<int>& a, vector<int>& b){
    /*
        Brute Force Approach
        Time Complexity - O(n1 log n - first insertion + n2 log n - second insertion) + O(n1 + n2) - vector 
        Space Complexity - O(n1 + n2) for set + O(n1 + n2)
    */
    set<int> st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }
    int index=0;
    // vector<int> unionVec(st.begin(), st.end());
    int stSize = st.size();
    vector<int> unionVec(stSize);
    for(auto it: st){
        unionVec[index++] = it;
        // unionVec.push_back(it);
    }
    return unionVec;
}

vector<int> unionOf2SortedArray2Pointer(vector<int>& a, vector<int>& b){

    /*

    */
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){ 
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}
int main()
{
    vector<int> a = {1,1,2,3,4,5};
    vector<int> b = {2,3,4,4,5,6,7};
    vector<int> result = unionOf2SortedArray(a, b);
    for(auto it = result.begin();it!=result.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
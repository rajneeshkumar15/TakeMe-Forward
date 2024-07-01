#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}
int longestConsectiveSequenceBrute(int a[], int n){
    /*
        Time Complexity - O(n^2)
    */
    int longest = 1;
    for(int i=0;i<n;i++){
        int x = a[i];
        int cnt = 1;
        while(linearSearch(a, n, x+1) == true){
            x = x + 1;
            cnt = cnt + 1;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int longestConsectiveSequenceBetter(int a[], int n){
    sort(a, a+n);
    if(n==0) return 0;
    int longest=1, cntCur = 0, last_smaller = INT_MIN;
    for(int i=0;i<n;i++){
        if((a[i] - 1) == last_smaller){
            cntCur+=1;
            last_smaller = a[i]; 
        }
        else if(a[i] != last_smaller){
            cntCur = 1;
            last_smaller = a[i];
        }
        longest = max(longest, cntCur);
    }
    return longest;
}

int longestConsectiveSequenceOptimal(int a[], int n){
    /*
        Time Complexity = O(n) + O(3n)
        Space Complexity - O(n)
    */
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it: st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main()
{
    int a[] = {100, 200, 1, 3, 2, 4};
    int n = sizeof(a)/sizeof(a[0]);
    int result = longestConsectiveSequenceOptimal(a, n);
    cout<<result<<endl;
    return 0;
}
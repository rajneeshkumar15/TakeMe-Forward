#include <bits/stdc++.h>
using namespace std;

int findMissingNumberBrute(vector<int>&a, int N) {

    /*
        Time Complexity = O(n) * O(n) ~= O(n^2)
        Space Complexity = O(1)
    */
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int findMissingUsingHashing(vector<int>&a, int N){
    /*
        Time Complexity = O(n) + ~O(n) = O(2n)
        Space Complexity = O(n)
    */
    int hash[N + 1] = {0};
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}

int findMissingUsingSum(vector<int>&a, int N){
    int sum1 = N * ( N + 1 ) / 2;
    int sum2 = 0;
    for(int i=0;i<N-1;i++){
        sum2+=a[i];
    }
    int missingNum = (sum1 - sum2);
    return missingNum;
}
int findMissingUsingXOR(vector<int>&a, int N){
    /*
        Time Complexity - O(2n)
        Space Complexity - O(1)
    */
    int xor1=0, xor2=0;
    int n = N-1;
    for(int i=0;i<N;i++){
        xor2 = xor2 ^ a[i];
        xor1^=(i+1);
    }
    int missingNum = (xor1^xor2);
    return missingNum;
}
int main()
{
    int N = 10;
    vector<int> a = {1,2,3,4,5,6,7,8,10};
    int ans = findMissingUsingXOR(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}


/*int findMissingBetter(vector<int> &a, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < a.size(); i++)
    {
        mpp[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (mpp.find(i) == mpp.end())
        {
            return i;
        }
    }
    return -1;
}*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Precomputing
    int hash[13]={0}; // Initialize 'hash' with 'n' elements, all set to 0
    for (int i = 0; i < n; i++) {
        hash[a[i]] += 1;
    }

    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        // Fetch and print
        cout << hash[num] << endl;
    }

    return 0;
}

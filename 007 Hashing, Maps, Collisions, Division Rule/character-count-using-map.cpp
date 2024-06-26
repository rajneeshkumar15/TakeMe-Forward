#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mpp;

    // Count the occurrences of each character in the string
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }
    // Iteration in the map
    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }
    int t;
    cin >> t;
    while (t--) {
        char ch;
        cin >> ch;
        cout << mpp[ch] << endl;
    }
    return 0;
}
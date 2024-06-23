#include<bits/stdc++.h>
using namespace std;

/*
    map: it store element in (key,value) pair where key must
    be unique. map key something to set data structure.
*/
void explainMap(){

    // Syntax: map<key_data-type, value_data-type> variable_name
    map<int, int> mpp;

    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int>mpp;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2, 4});

    // iterate on the map
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //[{1,2},{2,4},{3,1}]
    cout<<mpp[1];   // value = 2
    cout<<mpp[5];   // value = 0 or null if key is not present, or mpp.end()
    
    auto it = mpp.find(3);  // target the key = 3
    if(it !=mpp.end()) {
        cout<<it->second;
    }

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above

}
int main()
{
    explainMap();
    return 0;
}
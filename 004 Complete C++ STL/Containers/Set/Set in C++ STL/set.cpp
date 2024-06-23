#include<bits/stdc++.h>
using namespace std;

/*
    Set: A set is a STL container that stores unique element
    in a particular/sorter order. Every operation on a set takes O(1)
    complexity in the average case and take O(n) in the worst case. And
    all functions takes O(log n)
*/
void explainSet(){

    // Syntax: set<data_type> variable_name
    set<int> st;

    // insert(): to insert an element in the set
    st.insert(1);    // {1}
    st.emplace(2);    // {1,2}
    st.insert(2);    // {1,2}
    st.insert(4);    // {1,2,4}
    st.insert(3);    // {1,2,3,4}

    /*
        begin(), end(), rbegin(), rend(), size(),
        empty() and swap() are same as those of above
    */

   // {1,2,3,4,5}
   auto it = st.find(3);    // return iterator and find 3 in set

    // {1,2,3,4,5}
    auto it = st.find(6);   // if an element is not in the set, it will always return st.end();

    st.erase(5);    // {1,2,3,4}

    // count()
    auto it = st.count(1);  // if exists return 1 else 0

    // we can also erase something using iterator(it).
    auto it = st.find(3);
    st.erase(it);

    // erase between range (start, end-1), same as vector
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    /*
        lower_bound() and upper_bound() function works in the same way
        as in vector or array it does
    */

   auto it = st.lower_bound(2);
   auto it = st.upper_bound(3);
}
int main()
{
    explainSet();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*
    Pair is used to combine together to values that may be of different
    data types or store two heterogeneous objects as a single unit. It 
    is basically used if we want to store tuples.
*/

void explainPair(){
    
    pair<int, int> p = {1,3};                       // Simple Pair
    cout<<p.first<<" "<<p.second<<endl;             // Accessing the pair

    pair<string, int> a = {"Rajneesh", 22};
    cout<<a.first<<" "<<a.second<<endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};      // Nested pair/ more than 2 values
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int, int> arr[] = {{1,2}, {2,5},{5,1}};    // Pair in array index
    cout<<arr[1].second<<endl;
}
int main()
{
    explainPair();
    return 0;
}
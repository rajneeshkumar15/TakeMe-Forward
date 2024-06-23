#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    /*
        Multiset - all the element store in a sorted fashion but
                   it doesn't store unique element, store duplicate
    */

   // Syntax - multiset<data_type> variable_name

   multiset<int> ms;
   ms.insert(1);    // {1}
   ms.insert(1);    // {1,1}
   ms.insert(1);    // {1,1,1}

   ms.erase(1); // all 1's erased

   int cnt = ms.count(1);

   // only a single one erased
   ms.erase(ms.find(1));

   ms.erase(ms.find(1), ms.find(1)+2);

   // Rest all functions are same as set
}
int main()
{
    explainMultiSet();
    return 0;
}
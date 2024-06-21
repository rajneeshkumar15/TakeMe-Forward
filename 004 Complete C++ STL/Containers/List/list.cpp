#include<bits/stdc++.h>
using namespace std;

/*
    Lists are sequence containers that allow non-contiguous
    memory allocation. As compared to the vector, the list 
    has slow traversal, but once a position has been found,
    insertion and deletion are quick (constant time).
*/
void explainList(){

    // Syntax: list<data_type> variable_name;
    list<int> ls;

    /* 
        push_back: It accept a parameter and insert the element 
        passed in the parameter, the element is inserted at the end.
    */
    ls.push_back(2);    // {2}

    // emplace_back is usually it is faster than push_back()
    ls.emplace_back(4); // {2, 4}

    // element is inserted at the front.    
    ls.push_front(5);   // {5, 2, 4}

    // emplace_front is usually it is faster than push_front()
    ls.emplace_front(1);    // {1, 5, 2, 4}

    //  delete the last element of vector
    ls.pop_back();  // {1, 5, 2}

    //  delete the front/first element of vector
    ls.pop_front(); // {5, 2}

    // returns the end element of the vector
    cout<<ls.back()<<endl;

    // front() return the front/first element of the vector
    cout<<ls.front()<<endl;

    for(auto it: ls){
        cout<<it<<" ";
    }

    /*
        rest functions same as vector
        begin, end, rbegin, rend, clear, insert, size, swap.
        One major factor of list is, it has front function as well.
    */
}
int main()
{
    explainList();
    return 0;
}
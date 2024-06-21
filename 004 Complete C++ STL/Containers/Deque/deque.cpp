#include<bits/stdc++.h>
using namespace std;

/*
    Double-ended queues are sequence containers with 
    the feature of expansion and contraction on both 
    ends. They are similar to vectors, but are more 
    efficient in case of insertion and deletion of 
    elements. Unlike vectors, contiguous storage 
    allocation may not be guaranteed.
*/
void explainDeque(){

     // Syntax: deque<data_type> variable_name;
    deque<int> dq;

    /* 
        push_back: It accept a parameter and insert 
        the element passed in the parameter, the element
        is inserted at the end.
    */
    dq.push_back(1);    // {1}

    // emplace_back is usually it is faster than push_back()
    dq.emplace_back(2); // {1, 2}

    // element is inserted at the front.
    dq.push_front(4);   // {4, 1, 2}

    // emplace_front is usually it is faster than push_front()
    dq.emplace_front(3); // {3, 4, 1, 2} 

    //  delete the last element of vector
    dq.pop_back();  // {3, 4, 1}

    //  delete the front/first element of vector
    dq.pop_front(); // {4, 1}

    // returns the end element of the vector
    cout<<dq.back()<<endl;

    // front() return the front/first element of the vector
    cout<<dq.front()<<endl;

    for(auto it: dq){
        cout<<it<<" ";
    }

    /*
        rest functions same as vector
        begin, end, rbegin, rend, clear, insert, size, swap.
        One major factor of deque is, it has front function as well.
    */
}
int main()
{
    explainDeque();
    return 0;
}
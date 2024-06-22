#include<bits/stdc++.h>
using namespace std;

/*
    Stack: LIFO (Last in First Out).
    Stack has no indexing concept and there are generic 3 
    main functions ------> (push, pop, top)
    New Element is added at one end (top) and an element
    is removed from that end only. 

    STACK Vs. QUEUE
    for stack, stacking of books we can take the top book 
    easily and for queue remember when you have to stand 
    in queue front of ATM for taking out the cash, then 
    first person near to ATM has the first chance to take 
    out the money from ATM. So, queue is the FIFO (FIFO) 
    type working.
*/
void explainStack(){

    // Syntax: stack<data_type> variable_name
    stack<int> st;

    // push() operation
    st.push(1);     // {1}
    st.push(2);     // {2,1}
    st.push(3);     // {3,2,1}
    st.push(3);     // {3,3,2,1}
    st.emplace(5);  // {5,3,3,2,1}

    // top() function return the top element present in the stack
    cout<<st.top(); // print 5 * "** st[2] is invalid"

    // pop() function delete the top element present in the stack
    st.pop();

    cout<<st.top(); // 3

    // size() function return the size of stack
    cout<<st.size();

    // empty() check is stack containing element or empty
    cout<<st.empty();

    // swap
    stack<int>s1, s2;
    st.swap(s2);

    // rest functions are same

}
int main()
{
    explainStack();
    return 0;
}
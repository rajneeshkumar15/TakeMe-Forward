#include<bits/stdc++.h>
using namespace std;

/*
    Queue: FIFO(First in First Out)
    Elements are inserted at the back (end) and
    are deleted from the front.  
*/
void explainQueue(){

    // Syntax: queue(data_type) variable_name;
    queue<int> q;

    // pushing element using push and emplace
    q.push(1);  // {1}
    q.push(2);  // {1,2}
    q.emplace(4);   // {1,2,4}

    q.back() +=5;   // 4 + 5

    cout<<q.back(); // 9

    cout<<q.front();    // 1

    q.pop();    // delete 1 from queue

    cout<<q.front();    // now 2 is new front

    // size swap empty and other functions are same
    
}
int main()
{

    return 0;
}
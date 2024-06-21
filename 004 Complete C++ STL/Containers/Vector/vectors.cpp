#include<bits/stdc++.h>
using namespace std;

/*
    vectors in STL are basically dynamic array that have the 
    ability to change size whenever elements are added or deleted
    from them. Vector travesed using iterators and elements stored
    in contiguous memory location.

*/

void explainVector(){

    // Syntax : vector<data_type> variable;
    vector<int> v;     

    /* 
        push_back: It accept a parameter and insert the element 
        passed in the parameter, the element is inserted at the end.
    */
    v.push_back(1);  

    // emplace_back is usually it is faster than push_back()
    v.emplace_back(2);          

    /* 
        vector size = 5, and all indexes contain 100. 
        {100,100,100,100,100}
    */
    vector<int> v(5, 100);      

    // vector size = 5, and all indexes contain all zero(0).
    vector<int> v(5);           
    vector<int> v1 = {2,5,9};

    // vector copy
    vector<int> v2(v1); 
        
    /*
        Iterators: Iterator points directly to the memory of
        vector and its elements.
    */

    // begin() returns the first element of the vector
    vector<int>::iterator it = v1.begin(); 

    // shifting the memory location 1 step ahead
    it++;                      

    /* 
        *(it) -> it gives us the memory location and (*) gives the
        element present at that memory location.
    */
    cout<<*(it)<<" ";           

    // shifting the memory location 2 step ahead
    it = it + 2;                
    cout<<*(it)<<" ";

    /* 
        end() will not point the last element of vector, instead of 
        this it point to right after the last element. So if we want
        to access the last element, do it--;
    */
    vector<int>::iterator it = v1.end();    
    it--;

    // now the last element of the vector returned 
    cout<<*(it)<<" ";           

    // back() returns the end element of the vector
    cout<<v1.back()<<" ";  

    // front() return the front/first element of the vector
    cout<<v1.front()<<" ";     

    // print the entired vector using loop because we know the indexing
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }

    // loop using auto keyword
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }

    // for each loop
    for(auto it: v1){
        cout<<it<<" ";
    }

    /* 
        erase: it is used to delete a specific element
        delete single element
        {10,20,12,23}
    */
    v.erase(v.begin()+1);       // result: {10,12,23}

    /* 
        delete multiple element
        {10,20,30,40,50}
          (start, end) end point is not included, 
          only range between start and end-1.
    */
    v.erase(v.begin()+2, v.begin() + 4 );   // result: {10,20,50}


    // Insert function: used to insert an element at a specified position.
    vector<int> v(2, 100);      // result: {100, 100}
    v.insert(v.begin(), 300);   // result: {300, 100, 100}  Single element
    v1.insert(v1.begin()+1, 2, 10);
    // result: {300, 10, 10, 100, 100}  Multiple element

    // Size of vector
    // {10, 20 30}
    v1.size();      // 3      return size of a vector


    // {10, 20}     delete the last element of vector
    v.pop_back();       // {10}
    
    /* 
        v1 -> {10, 20}
        v2 -> {30, 40}
    */
    v1.swap(v2);
    /* 
        v1 -> {30, 40}
        v2 -> {10, 20}
    */

    // delete all element of vector
    v1.clear();         

    // to check if the vector is empty or not.
    cout<<v1.empty();

}
int main()
{
    explainVector();
    return 0;
}
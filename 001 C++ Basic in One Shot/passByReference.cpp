#include<bits/stdc++.h>
using namespace std;

void print(int &n){
    cout<<"Pass by Reference: "<<n<<endl;
    n+=5;
    cout<<"Pass by Reference: "<<n<<endl;
    n+=5;
    cout<<"Pass by Reference: "<<n<<endl;  
}
int main()
{
    // Pass by reference
    // It don`t pass a copy of original value, 
    // it made changes on original value.
    // It takes the address of original value inside a 
    // parameterized function using '&' operator
    // so when we made changes on address of value
    // then the value should be change it`s value
    // but in case of array, it always pass by refernce
    int n = 10;
    cout<<"Original Value: "<<n<<endl;
    print(n);
    cout<<"Original Value now change due to Pass by Value: "<<n<<endl;
    return 0;
}
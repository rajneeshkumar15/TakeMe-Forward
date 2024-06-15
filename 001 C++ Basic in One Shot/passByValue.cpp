#include<bits/stdc++.h>
using namespace std;

void print(int num){

    // passByvalue create a copy of original 
    // value and did everything with the copy
    // but original value still state the same

    cout<<"Pass by Value: "<<num<<endl;
    num+=5;
    cout<<"Pass by Value: "<<num<<endl;
    num+=5;
    cout<<"Pass by Value: "<<num<<endl;
}
int main()
{
    int num = 10;
    print(num);
    cout<<"Original Number: "<<num<<endl;
    return 0; 
}
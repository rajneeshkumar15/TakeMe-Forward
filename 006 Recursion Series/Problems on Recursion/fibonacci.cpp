#include<bits/stdc++.h>
using namespace std;

int main()
{
    // finonacci
    int n;
    cin>>n;
    if(n <= 0){
        cout<<"Enter a positive integer"<<endl;
        return 0;
    }
    int a = 0, b = 1;
    if(n==1){
        cout<<a<<endl;
        return 0;
    }
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i < n; i++){
        int temp = a + b;
        cout<<temp<<" ";
        a = b;
        b = temp;
    }
    cout<<endl;
    return 0;
}
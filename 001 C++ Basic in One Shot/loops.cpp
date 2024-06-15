#include<bits/stdc++.h>
using namespace std;


int func(int n){
        if(n == 1 || n ==2){
                return 1;
        }
        int a = 1, b = 1, fib = 1;
        for(int i=3; i <= n; i++){
                fib = a + b;
                a = b;
                b = fib;
        }
        return fib;
}
int main()
{
    // For Loop

    // for(int i = 1; i <= 5; i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // while loop
    
    // int j = 1;
    // while(j<=5){
    //     cout<<j<<" ";
    //     j++;
    // }
    // cout<<endl;
    
    // do-while loop
    // int k = 1;
    // do{
    //     cout<<k<<" ";
    //     k++;
    // } while(k<=5);
    int n;
        cin>>n;
        int res = func(n);
        cout<<res;
    return 0;
}
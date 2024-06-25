#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    // brute force -> O(n)
    int cnt = 0;
    for(int i =1;i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    else return false;
}
bool checkPrime1(int n){
    // O(sqrt(n))
    int cnt = 0;
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            cnt++;
            if((n /i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2) return true;
    else return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool isPrime = checkPrime1(n);
        if(isPrime){
            cout<<n<<" is a prime number"<<endl;
        }else{
            cout<<n<<" is not a prime number"<<endl;
        }
    }
    return 0;
}
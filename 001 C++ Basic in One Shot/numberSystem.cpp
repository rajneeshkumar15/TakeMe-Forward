#include<bits/stdc++.h>
using namespace std;

// Decimal to Binary Conversion
int decToBin(int n){
    // Method 1 (Division Method)
    int ans = 0;
    int i = 0;
    while(n>0){
        int bit = n % 2;
        ans = bit * pow(10, i) + ans;
        n = n / 2;
        i++;
    }
    return ans;
}
int decToBin2(int n){
    // Method 2 (bitwise & Method)
    int ans = 0;
    int i = 0;
    while(n>0){
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}


// Binary to Decimal Conversion
int binToDec(int n){
    // Method 1 (Division Method)
    int ans = 0;
    int i = 0;
    while(n){
        int digit = n % 10;
        ans = digit * pow(2, i) + ans;
        n = n / 10;
        i++;
    }
    return ans;
}
int binToDec2(int n){
    int ans = 0;
    int i = 0;
    while (n) {
        int digit = n & 1;
        ans = ans + (digit << i);
        n = n >> 1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    // int binary = decToBin2(n);
    // cout<<binary<<endl;
    int decimal = binToDec(n);
    cout<<decimal<<endl;
    return 0;
}
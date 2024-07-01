/*
    Given two arrays arr1[0…m-1] and arr2[0..n-1], and a number x, the task is to find the pair arr1[i] + arr2[j] such that absolute value of (arr1[i] + arr2[j] – x) is minimum.

    Example: 

    Input: arr1[] = {1, 4, 5, 7};
    arr2[] = {10, 20, 30, 40};
    x = 32
    Output: 1 and 30
    Input: arr1[] = {1, 4, 5, 7};
    arr2[] = {10, 20, 30, 40};
    x = 50
    Output: 7 and 40
*/

#include<bits/stdc++.h>
using namespace std;

void findClosestPair(vector<int>& a, vector<int>& b, int x) {
    int n = a.size();
    int m = b.size();
    int diff = INT_MAX;
    int res_l, res_r;
    int left = 0, right = m - 1;
    while(left < n && right >= 0){
        if(abs(a[left] + b[right] - x) < diff){
            res_l = left;
            res_r = right;
            diff = abs(a[left] + b[right] - x);
        }
        if(a[left] + b[right] > x){
            right--;
        }
        else{
            left++;
        }
    }
    cout << "The closest pair is: " << a[res_l] << " " << b[res_r] << endl;
}
int main() {
    vector<int> a = {1, 4, 5, 7};
    vector<int> b = {10, 20, 30, 40};
    int x = 32;
    findClosestPair(a, b, x);
    return 0;
}

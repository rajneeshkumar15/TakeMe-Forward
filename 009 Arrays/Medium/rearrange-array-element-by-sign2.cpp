#include<bits/stdc++.h>
using namespace std;

void rearrangeBrute(int arr[], int n){
    /*
        Time Complexity - O(n) + O(min(pos,neg)) + O(leftElement) = O(2n)
        Space Complexity - O(n)
    */
    vector<int> pos, neg;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    if(pos.size() > neg.size()){
        for(int i = 0; i < neg.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i = 0; i < pos.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
        }
    }
    
}
int main()
{
    int arr[] = {-1,2,3,4,-3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrangeBrute(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
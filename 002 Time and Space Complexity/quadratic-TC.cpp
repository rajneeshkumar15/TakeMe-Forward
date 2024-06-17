#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        when i = 1 | j = [1,2,3,4,5 , .... N]
             i = 2 | j = [1,2,3,4,5 , .... N]
               .
               .
               .
             i = N | j = [1,2,3,4,5 , .... N]

             Basically for i, outer loop runs O(n) times
             same for j, inner loop runs O(n) times
             , So O(n) * O(n) = O(n^2)
    */
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"i = "<<i<<endl;
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    /*
        when i = 1 | j = [1]
             i = 2 | j = [1,2]
             i = 3 | j = [1,2,3]
               .
               .
               .
             i = N | j = [1,2,3, , .... N]

             Basically no. of iteration is
             1 + 2 + 3 + 4 + 5 + ........ + N, which is nothing but sum of first N natural number

             N * ( N + 1 ) / 2
             .................

             N^2/2 + N/2 (Exact Time Complexity)
             but if we avoid constant and lower values then the overall time complexity is O(N^2).
    */
    for(int i=1;i<=n;i++){
        cout<<"i = "<<i<<endl;
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
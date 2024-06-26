Hash Array
1. Precompute first
    i. Initialize a empty hash array with size 13 containing all 0
        int hash[13] = {0};
    ii. iterate the loop till n.
    iii. when the element found, simple element+=1
        for(int i=0;i<n;i++){
            hash[a[i]]+=1;
        }

2. fetch
    cout<<hash[num];

3. Maximum size of an int array inside int main() - 10^6 - (1e6)
4. Maximum size of an int array outside int main() -> globally - 10^7 (1e7);

Everything in map is stored in sorted order
map time complexity is : O(log n) is all cases
unordered_map time store values in unsorted order - O(1) -> average and best, and worst case O(n), but worst case very rarely happen once in a million time.

Hashing Methods
1. 
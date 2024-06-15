#include<bits/stdc++.h>
using namespace std;


// Functions are set of code which perform something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Function are used to use same code multiple time

// Void - which does not return anything
// return 
// Parameterised
// Non - Parameterised

void printName(){
    // void and non parameterised function
    cout<<"Rajneesh"<<endl; 
}
void foodName(string s){
    // void and parameterised function
    cout<<"Paneer"<<endl; 
}

// Take two number and print its sum

int sumOfTwoNum(int num1, int num2){
    int sum = num1 + num2; // 10 + 20 = 30
    return sum; // return 30
    // return num1 + num2;
}
int main()
{
    printName();
    foodName("Panner");
    int num1, num2;
    cin>>num1>>num2;
    int ans = sumOfTwoNum(num1 , num2);
    cout<<ans<<endl;
    return 0;
}
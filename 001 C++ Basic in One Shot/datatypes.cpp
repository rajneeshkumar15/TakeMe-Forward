#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int, long, long long, float, double, boolean, char
    int num;
    cin>>num;
    cout<<"Integer: "<<num<<" with size of :"<<sizeof(num)<<endl;
    float num2;
    cin>>num2;
    cout<<"Floating Point: "<<num2<<" with size of :"<<sizeof(num2)<<endl;
    double num3;
    cin>>num3;
    cout<<"Precision Floating Point"<<num3<<" with size of :"<<sizeof(num3)<<endl;
    long num4;
    cin>>num4;
    cout<<"Long Integer: "<<num4<<" with size of :"<<sizeof(num4)<<endl;
    long long num5;
    cin>>num5;
    cout<<"Long Long Integer: "<<num5<<" with size of :"<<sizeof(num5)<<endl;
    char ch = 'A';
    cout<<"Char: "<<ch<<" with size of :"<<sizeof(ch)<<endl;
    bool isTrue = true;
    cout<<"Boolean: "<<isTrue<<" with size of :"<<sizeof(isTrue)<<endl;

     // String and getline
    // string s;
    // cin>>s;
    // cout<<s;
    // Whenever the Space/Null character find, then it terminate
    // To get rid of it, we have getline in-build function
    // get rid of buffer of previous string s
    string s2;
    getline(cin, s2);
    cout<<s2;

    char ch = 'A';
    cout<<ch;
    return 0;
}
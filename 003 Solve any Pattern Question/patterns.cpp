#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    /*
        * * * *
        * * * *
        * * * *
        * * * *
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
        /*
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    /*
        * * * * *
        * * * *
        * * *
        * *
        * 
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    /*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern7(int n){
            /*
            *
          * * *
        * * * * *
        */
    for(int i=0;i<n;i++){
        //space
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    /*
        * * * * *
          * * *
            * 
    */
    for(int i=0;i<n;i++){
        //space
        for(int space=0;space<=i;space++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    /*
          *
         ***
        *****
        *****
         ***
          *
    */
    for(int i=0;i<n;i++){
        //space
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        //space
        for(int space=0;space<=i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    /*
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
    */
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    /*
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
    */
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    /*
        1      1
        12    21
        123  321
        12344321
    */
    int inSp = 2 * (n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int space = 1; space <= inSp;space++){
            cout<<" ";
        }
        // number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        inSp -=2;
    }
}
void pattern13(int n){
    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */
    int counter = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    /*
        A
        AB
        ABC
        ABCD
        ABCDE
    */
    for(int i=0;i<n;i++){
        for(char ch = 'A'; ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    /*
        ABCDE
        ABCD
        ABC
        AB
        A
    */
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    /*
        A
        BB
        CCC
        DDDD
        EEEEE
    */
    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern17(int n){
    /*
        A
       ABA
      ABCBA
     ABCDCBA
    */
    for(int i=0;i<n;i++){
        //space
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        char ch = 'A';
        int breakPoint = (2*i+1) / 2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakPoint){
                ch++;
            }else{
                ch--;
            }
        }
        cout<<endl;
    }
}
void pattern18(int n){
    /*
        E
        D E
        C D E
        B C D E
        A B C D E
    */
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern19(int n){
    /*
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
    */
    int iniS = 0;
    for(int i=0;i<n;i++){
        // stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int space =0;space<iniS;space++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS +=2;
        cout<<endl;
    }
    iniS = 2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int space=0;space<iniS;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS -=2;
        cout<<endl;
    }
}
void pattern20(int n){
    /*
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */
    int iniS = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int space=1;space<=iniS;space++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) iniS -=2;
        else iniS +=2;

    }
}
void pattern21(int n){
    /*
        ****
        *  *
        *  *
        ****
    */
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    // test case
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern21(n);
    }
    return 0;
}
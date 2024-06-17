#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin>>marks;
    char grade;

    /*  Best Case: When the program takes the least amount of time to get execute. 
        if the mark is 10(i.e. < 25), only the first line will be executed and the 
        rest of the lines will be skipped. So, the least amount of steps i.e. only 1
        steps are required in this case.
    */
    if(marks < 25){
        grade = 'D';
    }
    else if(marks < 45){
        grade = 'C';
    }
    /*
        Average Case: A case between the best and the worst
    */
    else if(marks < 65){
        grade = 'B';
    }
    else{
        grade = 'A';
    }

    /*
        Worst Case: When theprogram takes the maximum amount of time to get execute.
        if the mark is 70(i.e. > 65), the last line will be executed after checking 
        all the above conditions. So, the maximum amount of steps i.e. 4 steps are 
        required in this case.
    */
    cout<<"Your grade is: "<<grade<<endl;
    return 0;
}
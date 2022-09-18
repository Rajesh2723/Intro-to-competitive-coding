/*
Nth Fibonacci Number
Send Feedback
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
The first line of each test case contains a real number ‘N’.
Output Format :
For each test case, return its equivalent Fibonacci number.
Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second
Sample Input 1:
6
Sample Output 1:
8
*/
#include<bits/stdc++.h>
using namespace std;

 int fact(int n){

    if(n==0||n==1){
        return n;
    }
    int s=fact(n-1)+fact(n-2);
    return s;
}
int main()
{
        int n;
    cin>>n;
    int val=fact(n);
    cout<<val<<endl;
}

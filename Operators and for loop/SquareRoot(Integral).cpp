/*
Square Root (Integral)
Send Feedback
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
/*	int n;
    cin>>n;
    int sq=0;
    sq=sqrt(n);
    cout<<sq;
    */
     int n;
    cin >> n;
    int output = 0;
    while(output * output <= n) {
        output = output + 1;
    }
    output = output - 1;
    cout << output;
}

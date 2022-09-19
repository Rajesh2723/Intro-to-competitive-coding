/*
Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int s;
   
    int dec=0;
    int pv=1;
    while(n!=0){
        int rem=n%10;
        dec=dec+pv*rem;
        pv*=2;
        n/=10;
        
    }
   // cout<<s<<endl;
    cout<<dec<<endl;
}

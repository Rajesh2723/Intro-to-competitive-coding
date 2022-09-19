/*
Reverse of a number
Send Feedback
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int rev=0;
    int n;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev<<endl;
	
}

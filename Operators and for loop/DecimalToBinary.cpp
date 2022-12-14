/*Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
*/  //######################################################################/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    long ans=0;
    long pv=1;
    while(n>0){
        int lastbit=n%2;
        ans=ans+lastbit*pv;
           pv*=10;
        n/=2;
       // pv*=10;
    }
    cout<<ans;
	
}

/*
All Prime Numbers
Send Feedback
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
*/
#include <iostream>
using namespace std;

int main(){

   int n;
    cin>>n;
    int i = 2;
    while(i<=n){
        bool isPrime = true;
        int d = 2;
        while(d<i){
             if(i%d == 0){ 
                isPrime = false;
            break;
            }
            d++;
        }
        if(isPrime == true){
            cout << i << endl;
        }
       i++; 
    }
    

/*
Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
    int i=1;
    //int j=1;
    int value=1;
    //int k=1;
    while(i<=n){
	int j=1;
        value=i;
        while(j<=i){
            cout<<value;
            value+=1;
            //k+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}



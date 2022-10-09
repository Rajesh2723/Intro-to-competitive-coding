/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {

    
      char ch;
	cin>>ch;
   
    if(ch>='a' and ch<='z'){
        cout<<0<<endl;
    }else if(ch>='A' and ch<='Z'){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
  
    
	
}

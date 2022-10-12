#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void allPrefix(char input[]){
 //   int len=strlen(input);
 for(int i=0;input[i]!='\0';i++){
     for(int j=0;j<=i;j++){
         cout<<input[j];
     }
     cout<<endl;
 }
    
}
int main()
{
   char input[100]="abcd";
  allPrefix(input);
 return 0;
}

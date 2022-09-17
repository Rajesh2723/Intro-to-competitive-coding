#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int value=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value;
            value+=1;
            j+=1;
            
        }
        cout<<endl;
        i+=1;
    }
    
}
#####################another pattern
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int value=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k+=1;
        }
        int j=1;
        while(j<=i){
            cout<<value;
            value+=1;
            j+=1;
            
        }
        cout<<endl;
        i+=1;
    }
    
}


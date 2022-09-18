#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d=2;
    bool divided=false;
    while(d<n){
        if(n%d==0){
            divided=true;
            break;
        }
        d=d+1;
    }
    if(divided){
        cout<<" Not a prime"<<endl;
    }else{
        cout<<" prime"<<endl;
    }
}

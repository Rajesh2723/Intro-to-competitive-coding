#include <iostream>
using namespace std; 
int main() {
    char c;
    cin>>c;
    int count=0;
    while(c!='$'){
        count++;
        //cout<<count<<endl;
        cin>>c;
       // cout<<count<<endl;
    }
    cout<<count<<endl;
}

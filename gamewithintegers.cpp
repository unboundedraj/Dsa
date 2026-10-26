#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int remainder=n%3;
        if(remainder==2|| remainder==1){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    bool ans=0;
    cin>>s;
    char t=s[0];
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==t){
            c++;
            if(c==7){
                ans=1;
                break;
            }
        }
        else{
            t=s[i];
            c=1;
        }
    }
    if(ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}
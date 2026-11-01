#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str="codeforces";
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=str[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}   
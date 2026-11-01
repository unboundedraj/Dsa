#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,ans;
    cin>>s;
    ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y'){
            continue;
        }
        else{
            ans.push_back('.');
            if(int(s[i])>=65 &&int(s[i])<=90){
                ans.push_back(s[i]+32);
            }
            else{
                ans.push_back(s[i]);
            }
        }
    }
    cout<<ans;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string compress(string s){
    string ans="";
    ans.push_back(s[0]);
    string str=to_string(s.length()-2);
    ans=ans+str;
    ans.push_back(s[s.length()-1]);
    return ans;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()>10){
            s=compress(s);
            cout<<s<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
 
    return 0;
}
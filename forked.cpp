#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a;
        cin>>b;
        cin>>xk;
        cin>>yk;
        cin>>xq;
        cin>>yq;
        int ans=0;
        map<<int,int>>check;
        check[]

        vector<pair<int,int>>queencheck;

        queencheck.push_back(make_pair(xq+a,yq+b));
        queencheck.push_back(make_pair(xq-a,yq+b));
        queencheck.push_back(make_pair(xq+a,yq-b));
        queencheck.push_back(make_pair(xq-a,yq-b));
        queencheck.push_back(make_pair(xq+b,yq+a));
        queencheck.push_back(make_pair(xq-b,yq+a));
        queencheck.push_back(make_pair(xq+b,yq-a));
        queencheck.push_back(make_pair(xq-b,yq-a));

        for(int i=0;i<kingcheck.size();i++){
            for(int j=0;j<queencheck.size();j++){
                if(kingcheck[i]==queencheck[j]){
                    ans++;
                }
            
            }            
        }
        cout<<ans<<"\n";

    }
 
    return 0;
}
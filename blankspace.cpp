#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        vector<int>v;
        int max=0;
        int globalmax=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                max++;
                if(globalmax<max){
                    globalmax=max;
                }
            }
            else{
                max=0;
            }
        }
        cout<<globalmax<<"\n";
        
    }
 
    return 0;
}
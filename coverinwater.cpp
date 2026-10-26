#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int empty_cells=0;
        int continuous_ecells=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                empty_cells++;
                continuous_ecells++;
            }
            else{
                continuous_ecells=0;
            }
            if(continuous_ecells==3){
                break;
            }
            
        }
        if (continuous_ecells==3){
            cout<<2<<"\n";
        }
        else{
            cout<<empty_cells<<"\n";
        }
    }
 
    return 0;
}
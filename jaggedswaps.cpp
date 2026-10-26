#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;

        cin>>n;
        int arr[n];
        string ans="Yes\n";
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        for(int j=0;j<n;j++){
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }

        }
        if(arr[n-(j+1)]!=(n-(j+1)+1)){
            ans="NO\n";
            break;
        }
    }
    cout<<ans;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
#define min(arr)    *min_element(arr.begin(),arr.end())
#define vecinput(v1, n)  for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}//will have to define v1 before this statement
#define arrinput(arr, n) for(int i=0; i<n; i++) {cin >>arr[i];}//will have to define arr before this statement
#define reverse(v1)   reverse(v1.begin(), v1.end()) 
#define bsearch(a,n,s)   binary_search(a,a+n,s) // will return 1 or 0 ie true or false (array should be sorted)
signed main(){
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
vector<int>v;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}
int m=v[0];
m=max(m,2*(x-v[n-1]));
for(int i=1;i<n;i++){
   m=max(m,v[i]-v[i-1]);
}
cout<<m<<endl;






}
}
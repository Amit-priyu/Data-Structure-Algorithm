#include<bits/stdc++.h>
using namespace std;

#define int long long
void solve(){
    int n;cin>>n; map<int,int> m; int output=0;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) m[v[i]]++;
    for(int i=0; i<n; i++){
        if(m.find(v[i]) != m.end()){
            int s=0;
            for(int j=0; j<31; j++){
                if((v[i]&(1<<j))==0) s+=(1<<j);
            }
            if(m.find(s)!=m.end()){
                m[s]--;
                if(m[s]==0) m.erase(s);
            }
            output++;
             m[v[i]]--;
                if(m[v[i]]==0) m.erase(v[i]);
        }
    }
    cout<<output<<endl;
    return;
}
int32_t main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



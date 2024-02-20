#include<bits/stdc++.h>
using namespace std;
#define int long long

int f(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
void solve(int t){
   vector<int> v;
   int s=0;
   for(int i=1; i<=200000; i++){
    int curr=i;
    while(curr>0){
        s+=curr%10; curr/=10;
    }
    v.push_back(s);
   }
   while(t--){
    int n; cin>>n;
    cout<<v[n-1]<<endl;
   }

}
int32_t main(){
   
   int t; cin>>t;
    solve(t);
    return 0;
}

/*
 int t; cin>>t;
    while(t--){
        int n; cin>>n;
    vector<string> v; 
    vector<int> v1;
    for(int i=0; i<n; i++){
        string s; cin>>s; v.push_back(s);
    }
    for(int i=0; i<n; i++){
        int output=0;
        for(int j=0; j<n; j++){
            if(v[i][j]=='1') output++; 
        }
        if(output>0) v1.push_back(output);
    }
    bool eql=0;
    for(int i=1; i<v1.size(); i++){
        if(v1[i] !=v1[i-1]) {eql=1; break;}
    }
    if(eql==0) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;
    }
    return 0;
    
*/

















// void solve(){
//     string s; cin>>s;
//     int c1=0,c2=0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='A') c1++;
//         if(s[i]=='B') c2++;
//     }
//     if(c1>c2) cout<<"A"<<endl;
//     else cout<<"B"<<endl;
// }
// int main(){
//     int t; cin>>t;
//     while(t--){
//        solve();
//     }
//     return 0;
// }
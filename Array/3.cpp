#include<bits/stdc++.h>
using namespace std;

#define int long long
void solve(){
    int n,m; cin>>n>>m;
    int ind=-1; bool f=true;
    while(f){
        int weight=n/2; weight+=(n%2);
        if(weight>=m){
            int c=2*m-1;
            cout<<c*ind<<endl;
            weight=0;
        }else{
            m=m-weight; ind=ind*2; n/=2;
        }
    }
}
int32_t main(){
    cout<<"hi there"<<endl;
    int n; cin>>n;
    cout<<n<<endl;
    return 0;
}
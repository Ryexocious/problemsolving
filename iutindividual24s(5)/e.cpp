#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        for(int j=0;j<x;j++){
            ll y;
            cin>>y;
            if(m[y]!=0){
                m[y]=-1;
            }
            else{
                m[y]=i;
            }
        }
    }
    ll co=0;
    set<ll>st;
    for(auto it : m){
        if(it.second!=-1){
            st.insert(it.second);
        }
    }
    if(st.size()>=n){
        cn;
        return;
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
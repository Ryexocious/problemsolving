#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n,d=0,l;
    cin >> n;
    vec v(n),v2(n);
    map<pair<ll,ll>,ll>v3;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) cin >> v2[i];
    for(int i = 0; i < n; i++){
        if(v[i]<v2[i]){
            if(d<v2[i]-v[i]){
                d=max(d,v2[i]-v[i]);
                l=i;
            }

        }
    }
    for(int i = 0; i < n; i++){
        if(i==l){
            v[i]+=d;
            continue;
        }
        v[i]-=d;
    }
    for(int i = 0; i < n; i++){
        if(v[i]<v2[i]){
            cn;
            return;
        }
    }
    cy;
}
int main() {
    fast;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}

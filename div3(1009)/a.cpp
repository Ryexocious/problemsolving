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
ll chk(pair<ll, ll> p1, pair<ll, ll> p2) {
    return (p1.first - p2.first) * (p1.first - p2.first) + 
           (p1.second - p2.second) * (p1.second - p2.second);
}

void solve() {
    ll l, r, d, u;
    cin >> l >> r >> d >> u;
    pair<ll, ll> L = {-l, 0};
    pair<ll, ll> R = {r, 0};
    pair<ll, ll> D = {0, -d};
    pair<ll, ll> U = {0, u};
    vector<ll> v;
    v.pb(chk(L, R));
    v.pb(chk(L, D));
    v.pb(chk(L, U));
    v.pb(chk(R, D));
    v.pb(chk(R, U));
    v.pb(chk(D, U));
    sort(all(v));
    if(v[0]>0 && v[0]==v[1] && v[1]==v[2] && v[2]==v[3] && v[4] == v[5]){
        cy;
    } 
    else{
        cn;
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

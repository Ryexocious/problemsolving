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
void solve() {
    ll n, k;
    cin >> n >> k;
    if (k > (n * (n + 1)) / 2 || k < n) {
        cout << -1 << '\n';
        return;
    }
    if (k == n) {
        cout << 1 << '\n';
        for (ll i = 2; i <= n; i++) {
            cout << i - 1 << " " << i << '\n';
        }
        return;
    }
    vector<ll> res;
    ll r = k - n,mx = n;
    while (r != 0) {
        if (r >= mx - 1) {
            res.pb(mx);
            r -= mx - 1;
            mx--;
        } else {
            res.pb(r + 1);
            for (ll i = 1; i <= r; i++) {
                res.pb(i);
            }
            for (ll i = r + 2; i <= mx; i++) {
                res.pb(i);
            }
            r = 0;
        }
    }
    set<ll> st(res.begin(), res.end());
    for (ll i = 1; res.size() < n; i++) {
        if (!st.count(i)) res.pb(i);
    }
    cout << res[0] << '\n';
    for (ll i = 1; i < n; i++) {
        cout << res[i - 1] << " " << res[i] << '\n';
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







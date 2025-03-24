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
    ll n;
    cin >> n;
    vec t(2 * n + 1);
    vec cnt(2 * n + 1);
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if (v[i].first == v[i].second) {
            t[v[i].first] = 1;
            cnt[v[i].first]++;
        }
    }
    for (ll i = 1; i <= 2 * n; i++) {
        t[i] += t[i - 1];
    }
    for (ll i = 0; i < n; i++) {
        ll li = v[i].first, ri = v[i].second;
        if (li == ri) {
            if (cnt[li] > 1) {
                cout << 0;
            }
            else {
                cout << 1;
            }
        }
        else {
            if (t[ri] - t[li - 1] == ri - li + 1) {
                cout << 0;
            } 
            else {
                cout << 1;
            }
        }
    }

    cout << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}



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
bool has_and_zero_pair(ll l, ll r, ll &a, ll &b) {
    vector<ll> candidates;
    if (r - l + 1 > 64) {
        // Guarantee: you can always find a pair in this range
        a = l;
        b = l + 1;
        return true;
    }
    for (ll i = l; i <= r; ++i) {
        candidates.push_back(i);
    }
    for (int i = 0; i < candidates.size(); ++i) {
        for (int j = i + 1; j < candidates.size(); ++j) {
            if ((candidates[i] & candidates[j]) == 0) {
                a = candidates[i];
                b = candidates[j];
                return true;
            }
        }
    }
    return false;
}

void solve() {
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    if (n % 2 != 0) {
        cout << l << "\n";
    } else {
        ll a, b;
        bool ok = has_and_zero_pair(l, r, a, b);
        if (ok) {
            if(n==2 && a^b==0){
                cout<<-1<<"\n";
            }
            else if (k <= n / 2)
                cout << a << "\n";
            else
                cout << b << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        //powers.clear();
        solve();
    }
}
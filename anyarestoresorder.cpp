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
ll findSmallestMissingElement(const set<ll>& s) {
    ll expected = 1;
    for (ll x : s) {
        if (x == expected) {
            expected++;
        } else if (x > expected) {
            break;
        }
    }
    return (expected > *s.rbegin()) ? -1 : expected;
}
void solve() {
    ll n, k, t;
    cin >> n >> k;
    vector<set<ll>> v(n);
    string line;
    ll l = 0;    
    cin.ignore();
    while (n--) {
        getline(cin, line);
        stringstream ss(line);
        set<ll> current_set;
        ll x;
        while (ss >> x) {
            current_set.insert(x);
        }
        v[l++] = current_set;
    }
    for (int i = 0; i < k; i++) {
        cin >> t;
        if (t == 1) {
            ll x, y;
            cin >> x >> y;
            v[x-1].insert(v[y-1].begin(), v[y-1].end());
        } else if (t == 2) {
            ll x;
            cin >> x;
            ll result = findSmallestMissingElement(v[x-1]);
            if (result == -1) {
                cout << "complete" << "\n";
            } else {
                cout << result << "\n";
            }
        }
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

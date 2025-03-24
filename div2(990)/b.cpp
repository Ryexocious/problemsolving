#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, ll> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> freq;
    for (char c : s) {
        freq[c]++;
    }
    char xmn = '\0';
    ll co = n + 1;
    for (auto it : freq) {
        if (it.second < co || (it.second == co && it.first < xmn)) {
            co = it.second;
            xmn = it.first;
        }
    }
    char xmx = '\0';
    ll co2 = 0;
    for (auto it : freq) {
        if (it.second > co2 || (it.second == co2 && it.first > xmx)) {
            co2 = it.second;
            xmx = it.first;
        }
    }
    for (ll i = 0; i < n; i++) {
        if (s[i] == xmn) {
            s[i] = xmx;
            break;
        }
    }

    cout << s << "\n";
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
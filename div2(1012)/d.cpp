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
const int MAXN = 1e5 + 5;
vector<bool> isPrime(MAXN, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 100000; i++) {
        for (int j = i + i; j <= 100000; j += i) {
            isPrime[j] = false;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    if (n == 2) {
        cout << 1 << " " << 2 << "\n";
        return;
    }
    ll k = (n + 1) / 2; 
    while (!isPrime[k]) {
        k--;
    }
    
    cout << k << " ";
    for (int i = 1; i < k; i++) { 
        cout << i << " " << 2 * k - i << " ";
    }
    for (int i = 2 * k; i <= n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    fast;
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

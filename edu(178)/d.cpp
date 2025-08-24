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

bool are_compatible(ll a, ll b) {
    ll g = __gcd(a, b);
    
    // If GCD is already 1, they're compatible
    if (g == 1) {
        return true;
    }
    
    // Factor g and check if it has any prime factor p ≥ 5
    for (ll p = 2; p * p <= g; p++) {
        if (g % p == 0) {
            // Found a prime factor
            if (p >= 5) {
                return false;  // Incompatible: shares prime factor p ≥ 5
            }
            // Remove all instances of this prime factor
            while (g % p == 0) {
                g /= p;
            }
        }
    }
    
    // Check if g itself is a prime ≥ 5
    if (g >= 5) {
        return false;  // Incompatible: g has a prime factor ≥ 5
    }
    
    // They're compatible: they share only 2 and/or 3 as factors,
    // or they're already coprime
    return true;
}

void solve() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Check if array has 0 or 1 elements (always beautiful)
    if (n <= 1) {
        cout << 0 << endl;
        return;
    }
    
    // Create incompatibility graph
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!are_compatible(a[i], a[j])) {
                graph[i].pb(j);
                graph[j].pb(i);
            }
        }
    }
    
    // Check if array is already beautiful
    bool is_beautiful = true;
    for (int i = 0; i < n && is_beautiful; i++) {
        if (!graph[i].empty()) {
            is_beautiful = false;
        }
    }
    
    if (is_beautiful) {
        cout << 0 << endl;
        return;
    }
    
    // Find maximum independent set (greedy approach)
    // Use vertices in order of increasing degree
    vector<pair<int, int>> degree_list;
    for (int i = 0; i < n; i++) {
        degree_list.pb({graph[i].size(), i});
    }
    
    sort(all(degree_list));  // Sort by degree (ascending)
    
    vector<bool> selected(n, false);
    int independent_set_size = 0;
    
    for (auto [deg, v] : degree_list) {
        bool can_select = true;
        
        // Check if v is compatible with all already selected vertices
        for (int u : graph[v]) {
            if (selected[u]) {
                can_select = false;
                break;
            }
        }
        
        if (can_select) {
            selected[v] = true;
            independent_set_size++;
        }
    }
    
    cout << n - independent_set_size << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
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
    ll n, q;
    cin >> n >> q;
    
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Use difference array for range updates
    vector<ll> diff(n + 1, 0);
    vector<pair<ll, ll>> queries(q);
    
    for(int i = 0; i < q; i++){
        ll l, r;
        cin >> l >> r;
        l--; r--; // Convert to 0-indexed
        queries[i] = {l, r};
        
        // Add 1 at the start of range
        diff[l]++;
        // Subtract 1 after the end of range
        diff[r + 1]--;
    }
    
    // Calculate prefix sum to get frequency
    vector<ll> freq(n, 0);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += diff[i];
        freq[i] = sum;
    }
    
    // Create position array with frequencies
    vector<pair<ll, ll>> positions(n);
    for(int i = 0; i < n; i++){
        positions[i] = {freq[i], i};
    }
    
    // Sort positions by frequency (descending)
    sort(positions.rbegin(), positions.rend());
    
    // Sort array in descending order
    sort(arr.rbegin(), arr.rend());
    
    // Create the rearranged array
    vector<ll> rearranged(n);
    for(int i = 0; i < n; i++){
        rearranged[positions[i].second] = arr[i];
    }
    
    // Calculate final sum X
    ll x = 0;
    for(auto [l, r] : queries){
        for(int j = l; j <= r; j++){
            x += rearranged[j];
        }
    }
    
    // Output maximum X and rearranged array
    cout << x << endl;
    for(int i = 0; i < n; i++){
        cout << rearranged[i];
        if(i < n-1) cout << " ";
    }
    cout << endl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
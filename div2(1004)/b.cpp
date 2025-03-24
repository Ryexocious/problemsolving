#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    
    // Read input and calculate frequency of each element
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    map<int, int> m;
    
    // Process the frequency map
    for (auto it : freq) {
        int val = it.first;
        int count = it.second;
        
        if (count == 1) {
            // If the element appears once, add it to the map
            m[val]++;
        }
        else if (count==2){
            // If the count is even, repeat it accordingly
            while (count--) {
                m[val]++;
            }
        }
        else {
            // If the count is odd, handle by adding in increments with additional labels
            m[val]++;
            m[val]++;
            count -= 2;
            
            int l = 1, co = 0;
            while (count--) {
                if (co == 2) {
                    co = 0;
                    l++;
                }
                m[val + l]++;
                co++;
            }
        }
    }
    
    // Output the modified map
    for (auto it : m) {
        cout << it.first << " " << it.second << "\n";
    }
    cout<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


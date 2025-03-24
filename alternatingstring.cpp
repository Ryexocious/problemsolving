#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<char, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i, n) for(int i = 0; i < (n); i++)
#define rfor(i, n) for(int i = (n - 1); i > 0; i--)

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Frequency maps for odd and even indices
    mp odd_count, even_count;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_count[s[i]]++;
        } else {
            odd_count[s[i]]++;
        }
    }

    // Find maximum frequency characters in odd and even positions
    int odd_max = 0, even_max = 0;
    for (auto& it : odd_count) {
        odd_max = max(odd_max, it.second);
    }
    for (auto& it : even_count) {
        even_max = max(even_max, it.second);
    }

    int half_len = n / 2;
    int min_operations;

    if (n % 2 == 0) {
        // When length is even
        min_operations = (half_len - odd_max) + (half_len - even_max);
    } else {
        // When length is odd
        min_operations = INT_MAX;

        for (int i = 0; i < n; i++) {
            mp new_odd_count = odd_count;
            mp new_even_count = even_count;
            if (i % 2 == 0) {
                new_even_count[s[i]]--;
                if (new_even_count[s[i]] == 0) {
                    new_even_count.erase(s[i]);
                }
            } else {
                new_odd_count[s[i]]--;
                if (new_odd_count[s[i]] == 0) {
                    new_odd_count.erase(s[i]);
                }
            }
            
            // Recalculate max frequencies after removal
            int new_odd_max = 0, new_even_max = 0;
            for (auto& it : new_odd_count) {
                new_odd_max = max(new_odd_max, it.second);
            }
            for (auto& it : new_even_count) {
                new_even_max = max(new_even_max, it.second);
            }
            
            // Calculate the number of replacements required
            int needed_operations = ((n - 1) / 2 - new_odd_max) + ((n - 1) / 2 - new_even_max);
            min_operations = min(min_operations, needed_operations + 1); // +1 for the removal operation
        }
    }
    
    cout << min_operations << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}



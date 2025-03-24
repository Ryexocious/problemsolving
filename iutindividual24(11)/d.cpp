#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to check if a colour can be used (i.e., it has not been used in the last 'p' stripes)
bool canUse(ll colour, const deque<ll>& recent) {
    for (ll r : recent) {
        if (r == colour) return false;  // Colour has been used in the last 'p' stripes
    }
    return true;
}

void solve() {
    ll n, k, p, m;
    cin >> n >> k >> p;
    cin >> m;
    
    vector<ll> stripes(m);  // Already knitted stripes
    for (ll i = 0; i < m; i++) {
        cin >> stripes[i];
    }

    if (k < p) {
        cout << "impossible" << endl;
        return;
    }

    vector<ll> freq(k + 1, 0);  // Frequency of each colour
    deque<ll> recent;           // Track the last 'p' colours used

    // Count the frequency of already knitted stripes
    for (ll i = 0; i < m; i++) {
        freq[stripes[i]]++;
        recent.push_back(stripes[i]);
        if (recent.size() > p) recent.pop_front(); // Maintain the recent 'p' colours
    }

    for (ll i = m; i < n; i++) {
        ll chosenColour = -1;
        
        // Choose the colour with the least frequency that's valid
        for (ll colour = 1; colour <= k; colour++) {
            if (canUse(colour, recent)) {
                if (chosenColour == -1 || freq[colour] < freq[chosenColour]) {
                    chosenColour = colour;
                }
            }
        }
        
        if (chosenColour == -1) {
            cout << "impossible" << endl;
            return;
        }

        // Add the chosen colour to the pattern
        stripes.push_back(chosenColour);
        freq[chosenColour]++;
        recent.push_back(chosenColour);
        if (recent.size() > p) recent.pop_front();
    }

    // Output the extended scarf pattern
    for (ll i = 0; i < n; i++) {
        cout << stripes[i] << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}


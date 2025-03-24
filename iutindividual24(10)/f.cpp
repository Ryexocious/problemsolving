#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    int n;
    string firstPlayer;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cin >> firstPlayer;

    // Check if the permutation is already sorted
    if (is_sorted(p.begin(), p.end())) {
        cout << "Alice" << endl;
        return;
    }

    // Count the number of inversions in the permutation
    int inversions = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                inversions++;
            }
        }
    }

    // If inversions are odd, Alice has the advantage
    // If inversions are even, Bob has the advantage
    if (inversions % 2 == 1) {
        if (firstPlayer == "Alice") {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    } else {
        if (firstPlayer == "Alice") {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
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
    return 0;
}

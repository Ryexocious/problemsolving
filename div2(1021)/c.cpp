#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the days
        sort(a.begin(), a.end());
        
        bool possible = false;
        
        // Check for three consecutive days
        for (int i = 0; i < n - 2; i++) {
            if (a[i] + 1 == a[i+1] && a[i+1] + 1 == a[i+2]) {
                possible = true;
                break;
            }
        }

        if (possible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}

/* "Remember Why You Started Down This Path,
    And Let That Memory Carry You Beyond Your Limit.” */
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;
typedef long double ld;
typedef vector<unsigned long long int> vi;
#define pb push_back
#define loop(i, n) for (lli i = 0; i < (n); i++)
#define endl "\n"
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define all(v) v.begin(), v.end()
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
void soln() {
    lli n;
    cin >> n;
    vi factorial(20);
    vector<bool> visited(20, false);
    factorial[0] = 1;
    for (lli i = 1; i <= 20; i++) {
        factorial[i] = i * factorial[i - 1];
    }
    // loop(i, 21) cout << factorial[i] << endl;
    vi ans;
    lli z = 0;
    bool pos = true;
    while (n > 0) {
        if (factorial[z] <= n) {
            z++;
        } else {
            z--;
            while (visited[z] == true) {
                z--;
            }
            n = n - factorial[z];
            visited[z] = true;
            ans.pb(z);
            z = 0;
            if (visited[0] == true && n > 0) {
                pos = false;
                break;
            }
        }
    }
    if (pos)
        loop(i, ans.size()) {
            sort(ans.begin(),ans.end());
            if (i == ans.size() - 1)
                cout << ans[i] << "!";
            else
                cout << ans[i] << "!+";
        }
    else
        cout << "impossible" << endl;
}
int main() {
    fast();
    lli t = 1;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case " << i++ << ": ";
        soln();
        cout << endl;
    }
}
// Author: tashobi_02 //

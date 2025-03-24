/* "Remember Why You Started Down This Path,
    And Let That Memory Carry You Beyond Your Limit.” */
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef vector<long long int> vi;
#define pb push_back
#define loop(i, n) for (lli i = 0; i < (n); i++)
#define endl "\n"
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define all(v) v.begin(), v.end()
#define Cases(ti) cout << "Case " << ti++ << ": "
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
void soln() {
    lli a, b, c;
    cin >> a >> b >> c;
    lli k, s;
    s = a + b + c;
    k = s * (s - (2 * a)) * (s - (2 * b)) * (s - (2 * c));
    s = s * s;
    // cout << "k and s square: ";
    // cout << k << " " << s << endl;
    lli g = __gcd(k, s);
    if (k <= s) {
        // cout << "gcd: " << g << endl;
        k = k / g;
        s = s / g;
        s = s * 4;
        // cout << "Direct: " << k / s << endl;
        cout << k << "/" << s << endl;
    } else {
        // cout << "gcd: " << g << endl;
        k = k / g;
        s = s / g;
        s = s * 4;
        if (k % 4 == 0 && s % 4 == 0) {
            k = k / 4;
            s = s / 4;
        }
        // cout << "Direct: " << k / s << endl;
        cout << k << "/" << s << endl;
    }
}
int main() {
    fast();
    lli t = 1;
    cin >> t;
    while (t--) {
        soln();
    }
}
// Author: tashobi_02 //

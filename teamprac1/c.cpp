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
const lli N = 10000000000;
lli pfx[N];
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    pfx[1] = 1;
    for (lli i = 2; i < N; i++) {
        pfx[i] = pfx[i - 1] + i;
    }
}
void soln() {
    lli A, B;
    cin >> A >> B;
    lli ct = 0;
    for (lli i = A; i <= B; i++) {
        // cout << s << endl;
        if (pfx[i] % 3 == 0) {
            ct++;
        }
        // cout << num << endl;
    }
    cout << ct << endl;
}
int main() {
    fast();
    lli t = 1;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case " << i++ << ": ";
        soln();
    }
}
// Author: tashobi_02 //
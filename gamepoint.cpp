#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef vector<long long int> vi;
#define pb push_back
#define loop(i, n) for (lli i = 0; i < (n); i++)
#define endl "\n"
#define py cout << "perfectus" << endl
#define pn cout << "invalidum" << endl
#define all(v) v.begin(), v.end()
#define Cases(ti) cout << "Case " << ti++ << ": "
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
void soln() {
    lli A, B, C;
    vector<tuple<lli, lli, lli>> pd = {make_tuple(3, 3, 3), make_tuple(2, 2, 2),
                                       make_tuple(6, 3, 0), make_tuple(6, 1, 1),
                                       make_tuple(4, 3, 1), make_tuple(4, 4, 0),
                                       make_tuple(4, 2, 1)};
    cin >> A >> B >> C;
    vi pts = {A, B, C};
    sort(pts.rbegin(), pts.rend());
    for (const auto& t : pd) {
        lli x, y, z;
        tie(x, y, z) = t;
        if (x == pts[0] && y == pts[1] && z == pts[2]) {
            py;
            return;
        }
    }
    pn;
}
int main() {
    fast();
    lli t = 1, ti = 1;
    cin >> t;
    while (t--) {
        Cases(ti);
        soln();
    }
}
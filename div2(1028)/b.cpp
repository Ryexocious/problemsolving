#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    // Max power in all test cases (optional optimization)
    // Or you can precompute max exponent from input

    while (t--) {
        int n; cin >> n;
        vector<int> p(n), q(n);
        int max_exp = 0;

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] > max_exp) max_exp = p[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> q[i];
            if (q[i] > max_exp) max_exp = q[i];
        }

        vector<ll> pow2(max_exp + 1);
        pow2[0] = 1;
        for (int i = 1; i <= max_exp; i++) {
            pow2[i] = (pow2[i-1] << 1) % MOD;  // faster than multiply by 2
        }

        vector<ll> A(n), B_rev(n);
        for (int i = 0; i < n; i++) {
            A[i] = pow2[p[i]];
        }
        for (int i = 0; i < n; i++) {
            B_rev[i] = pow2[q[n - 1 - i]];
        }

        vector<ll> C(n);
        for (int i = 0; i < n; i++) {
            C[i] = A[i] + B_rev[i];
            if (C[i] >= MOD) C[i] -= MOD;
        }

        vector<ll> prefixMaxC(n);
        prefixMaxC[0] = C[0];
        for (int i = 1; i < n; i++) {
            prefixMaxC[i] = max(prefixMaxC[i-1], C[i]);
        }

        for (int i = 0; i < n; i++) {
            cout << prefixMaxC[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

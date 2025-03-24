#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const double eps = 1e-7;

bool can_meet(double t, const vector<int>& x, const vector<int>& v, int n) {
    double left_bound = -1e18;
    double right_bound = 1e18;

    for (int i = 0; i < n; i++) {
        // Each friend can be within the range [x_i - v_i * t, x_i + v_i * t]
        double left = x[i] - v[i] * t;
        double right = x[i] + v[i] * t;

        // Update the overall meeting range
        left_bound = max(left_bound, left);
        right_bound = min(right_bound, right);

        // If there's no overlap, return false
        if (left_bound > right_bound) {
            return false;
        }
    }
    return true; // The friends can meet within this time
}

int main() {
    fast;
    int n;
    cin >> n;
    vector<int> x(n), v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Binary search for the minimum time
    double left = 0.0;
    double right = 1e9;  // A large enough upper bound
    
    while (right - left > eps) {
        double mid = (left + right) / 2;
        
        if (can_meet(mid, x, v, n)) {
            right = mid;  // Try to lower the time
        } else {
            left = mid;  // Increase the time
        }
    }
    
    cout << fixed << setprecision(9) << left << endl;
    return 0;
}

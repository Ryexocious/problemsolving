#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Function to count inversions using merge sort
ll count_inversions(vector<int>& a) {
    int n = a.size();
    vector<int> temp(n);
    function<ll(int, int)> merge_sort = [&](int left, int right) -> ll {
        if (left >= right) return 0;
        int mid = (left + right) / 2;
        ll inv_count = merge_sort(left, mid) + merge_sort(mid + 1, right);
        int i = left, j = mid + 1, k = left;
        while (i <= mid && j <= right) {
            if (a[i] <= a[j]) {
                temp[k++] = a[i++];
            } else {
                temp[k++] = a[j++];
                inv_count += (mid - i + 1); // Inversion occurs
            }
        }
        while (i <= mid) temp[k++] = a[i++];
        while (j <= right) temp[k++] = a[j++];
        for (int i = left; i <= right; i++) a[i] = temp[i];
        return inv_count;
    };
    return merge_sort(0, n - 1);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Initial inversion count
    ll initial_inversions = count_inversions(a);

    int best_l = 1, best_r = 1;
    ll min_inversions = initial_inversions;

    // Try every subarray [l, r]
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            vector<int> b = a;

            // Apply cyclic shift to subarray [l, r]
            int temp = b[l];
            for (int i = l; i < r; i++) b[i] = b[i + 1];
            b[r] = temp;

            // Count inversions after shift
            ll new_inversions = count_inversions(b);
            if (new_inversions < min_inversions) {
                min_inversions = new_inversions;
                best_l = l + 1;
                best_r = r + 1;
            }
        }
    }

    // Output the best pair of l and r
    cout << best_l << " " << best_r << "\n";
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

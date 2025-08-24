#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout << "YES" << "\n";
#define cn cout << "NO" << "\n";
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pob pop_back
#define sp " "

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    if (a[0] == n) {
        int mxidx = 1;
        while (a[mxidx] != n - 1)
            mxidx++;

        if (mxidx == 1) {
            for (int i = 1; i < n; i++)
                cout << a[i] << sp;
            cout << a[0] << "\n";
            return;
        }

        if (mxidx == n - 1) {
            cout << a[n - 1] << sp;
            for (int i = 0; i < n - 1; i++)
                cout << a[i] << sp;
            cout << "\n";
            return;
        }

        vector<int> ans;
        for (int i = mxidx; i < n; i++)
            ans.push_back(a[i]);

        mxidx--;
        ans.push_back(a[mxidx]);
        while (mxidx >= 0 && ans[ans.size() - 1] > a[mxidx]) {
            ans.push_back(a[mxidx]);
            mxidx--;
        }

        for (int i = 0; i < mxidx; i++)
            ans.push_back(a[i]);

        for (auto &i : ans)
            cout << i << sp;
        cout << "\n";
    } else {
        int mxidx = 0;
        while (a[mxidx] != n)
            mxidx++;

        if (mxidx == n - 1 && a[0] > a[n - 2]) {
            cout << a[n - 1] << sp;
            for (int i = 0; i < n - 1; i++)
                cout << a[i] << sp;
            cout << "\n";
            return;
        }

        vector<int> ans;
        for (int i = mxidx; i < n; i++)
            ans.push_back(a[i]);

        int j = mxidx - 1;
        ans.push_back(a[j]);
        j--;
        while (j >= 0 && a[j] > a[0]) {
            ans.push_back(a[j]);
            j--;
        }
        j++;
        for (int i = 0; i < j; i++)
            ans.push_back(a[i]);

        for (auto &i : ans)
            cout << i << sp;
        cout << "\n";
    }
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}